# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

require 'logger'
require 'fileutils'

# Number of seconds to wait for a soft-shutdown.
SHUTDOWN_TIMEOUT = 2 * 60

# Number of seconds to wait for script installation.
INSTALL_TIMEOUT = 5 * 60

# Git URL.
URL = 'https://github.com/LSTS/dune'

# VirtualBox command execution timeout (ms).
VBOX_TIMEOUT = '10800000'

# Table of tools.
TOOLS = {
  'gnu32'   => [['Ninja', 'Unix Makefiles'] , 'gcc -m32'  , 'g++ -m32'    ],
  'gnu64'   => [['Ninja', 'Unix Makefiles'] , 'gcc -m64'  , 'g++ -m64'    ],
  'llvm32'  => [['Ninja', 'Unix Makefiles'] , 'clang -m32', 'clang++ -m32'],
  'llvm64'  => [['Ninja', 'Unix Makefiles'] , 'clang -m64', 'clang++ -m64'],
  'sun32'   => [['Ninja', 'Unix Makefiles'] , 'suncc -m32', 'sunCC -m32'  ],
  'sun64'   => [['Ninja', 'Unix Makefiles'] , 'suncc -m64', 'sunCC -m64'  ],
  'icc32'   => [['Ninja', 'Unix Makefiles'] , 'icc -m32'  , 'icpc -m32'   ],
  'icc64'   => [['Ninja', 'Unix Makefiles'] , 'icc -m64'  , 'icpc -m64'   ],
  'mvs32'   => [['Visual Studio 10']        , ''          , ''            ],
  'mvs64'   => [['Visual Studio 10 Win64']  , ''          , ''            ],
  'mgw32'   => [['MinGW Makefiles']         , 'gcc -m32'  , 'g++ -m32'    ],
  'mgw64'   => [['MinGW Makefiles']         , 'gcc -m64'  , 'g++ -m64'    ],
}

# CMake test code.
TEST_CMAKE = <<CODE
cmake_minimum_required(VERSION 2.6)
project(TEST)
add_executable(test_c test.c)
add_executable(test_cxx test.cpp)
CODE

# C test code.
TEST_C = <<CODE
int main(void) { return 0; }
CODE

# C++ test code.
TEST_CXX = <<CODE
#include <stdexcept>
#include <new>
int main(void) { int* v = new int; return *v; }
CODE

AUTH = {
  :port     => 20022,
  :user_known_hosts_file => '/dev/null',
  :config   => false
}

$log = File.new(__FILE__.sub('.rb', '.log'), 'w')

def banner(text)
  o = '#' * 50
  i = '-' * 50
  $log.puts("\n\n#{o}\n#{i}\n\n")
  $log.puts(text)
  $log.puts("\n#{i}\n#{o}\n\n")
  $log.flush
end

def run(*cmd)
  banner(cmd.join(' '))
  pid = Process.spawn(*cmd, [:err, :out] => $log)
  Process.wait(pid)
  $?.exitstatus
end

class Builder
  def initialize(target, tchain)
    @target = target
    @tchain = tchain
    @gen = TOOLS[@tchain][0]
    @cc = TOOLS[@tchain][1]
    @cxx = TOOLS[@tchain][2]

    if ENV.include?('HOMEPROFILE')
      @home = ENV['HOMEPROFILE']
    else
      @home = ENV['HOME']
    end

    @base = File.join(@home, 'dune-cdash-build')
    @src = File.join(@base, tchain, target, 'src')
    @bin = File.join(@base, tchain, target, 'bin')
    @base_test = File.join(@base, tchain, target, 'test')

    FileUtils.mkdir_p(@base)

    raise "toolchain '#{@tchain}' is not usable" if not usable?
  end

  def write_file(file, code)
    File.open(file, 'w') { |f| f.write(code) }
  end

  def usable?
    ENV['CC'] = @cc
    ENV['CXX'] = @cxx

    @gen.each do |gen|
      src = File.join(@base_test, 'src')
      FileUtils.mkdir_p(src)

      write_file(File.join(src, 'CMakeLists.txt'), TEST_CMAKE)
      write_file(File.join(src, 'test.c'), TEST_C)
      write_file(File.join(src, 'test.cpp'), TEST_CXX)

      bin = File.join(@base_test, 'bin')
      FileUtils.mkdir_p(bin)

      Dir.chdir(bin)

      if run('cmake', '-G', gen, src) == 0
        rv = true if run('cmake', '--build', bin) == 0
      end

      Dir.chdir(@base)
      FileUtils.rm_rf @base_test

      if rv
        @gen = gen
        return true
      end
    end

    return false
  end

  def execute
    clone
    configure
    compile
    clean
  end

  def clone
    FileUtils.rm_rf @src if Dir.exists? @src
    run('git', 'clone', URL, @src)
  end

  def configure
    FileUtils.rm_rf @bin if Dir.exists? @bin
    FileUtils.mkdir_p @bin
    Dir.chdir(@bin)
    run('cmake', '-G', @gen, '-DTESTS=1', @src)
    Dir.chdir(@base)
  end

  def compile
    run('cmake', '--build', @bin, '--target', @target)
  end

  def clean
    FileUtils.rm_rf @bin
    FileUtils.rm_rf @src
  end
end

class VirtualBox
  def self.list_machines
    `vboxmanage list vms`.split("\n").map do |line|
      /\"([^\"]+)/.match(line)[1]
    end
  end

  def self.list_machines_cdash
    m = VirtualBox.list_machines
    o = []
    m.each do |n|
      `vboxmanage showvminfo --machinereadable "#{n}"`.split("\n").each do |l|
        if l.downcase.start_with?('description="cdash')
          o << n
        end
      end
    end
    o
  end

  def self.list_running
    `vboxmanage list runningvms`.split("\n").map do |line|
      /\"([^\"]+)/.match(line)[1]
    end
  end

  def initialize(name, target)
    @name = name
    @target = target
    @script = File.basename(__FILE__)
    @base = File.dirname(File.absolute_path(__FILE__))
    @ssh = false

    `vboxmanage showvminfo --machinereadable "#{@name}"`.split("\n").each do |l|
      if l.downcase == 'description="cdash,ssh"'
        @ssh = true
      end
    end
  end

  def shutdown
    run('vboxmanage', 'controlvm', @name, 'acpipowerbutton')
  end

  def shutdown!
    run('vboxmanage', 'controlvm', @name, 'poweroff')
  end

  def shutdown?
    deadline = Time.new + SHUTDOWN_TIMEOUT
    while deadline > Time.new
      if not running?
        return true
      end
      sleep(1)
    end
    false
  end

  def running?
    VirtualBox.list_running.include?(@name)
  end

  def start
    if running?
      inf('already running')
    else
      run('vboxmanage', 'startvm', @name, '--type', 'headless')
    end
  end

  def stop
    if running?
      shutdown
      if shutdown?
        banner('Powered off')
      else
        shutdown!
        if shutdown?
          banner('Powered off')
        end
      end
    else
      banner('Not running')
    end
  end

  def copy
    banner('Installing builder script...')
    require 'net/sftp'

    deadline = Time.new + INSTALL_TIMEOUT
    while deadline > Time.new
      begin
        Net::SFTP.start('127.0.0.1', AUTH[:user], AUTH) do |sftp|
          sftp.upload!(__FILE__, @script)
        end
        banner('Builder script installed')
        return
      rescue
      end
      sleep(1)
    end
    raise 'Failed to install script'
  end

  def build
    if @ssh
      build_ssh
    else
      build_vbox
    end
  end

  def build_vbox
    run('vboxmanage', 'guestcontrol', @name, 'execute',
        '--image', 'c:/Ruby/bin/ruby.exe',
        '--username', AUTH[:user],
        '--password', AUTH[:password],
        '--wait-exit', '--wait-stdout', '--wait-stderr',
        '--verbose', '--timeout', VBOX_TIMEOUT,
        '--',
        'C:/Documents and Settings/rasm/dune-cdash-build.rb',
        '--target',
        @target)
  end

  def build_ssh
    cmd = "ruby #{@script} --target #{@target}"
    banner(cmd)
    require 'net/ssh'
    Net::SSH.start('127.0.0.1', AUTH[:user], AUTH) do |ssh|
      ssh.exec(cmd)
      ssh.loop
    end
  end

  def execute
    start
    copy
    build
    stop
  end

  def inf(msg)
    $log.puts(msg)
    $log.flush
  end
end

############################################################################
# Command line options.                                                    #
############################################################################
require 'optparse'

options = {
  :target      => 'Experimental',
  :tchain      => nil,
  :machine     => nil,
}

OptionParser.new do |opts|
  opts.banner = "Usage: options.rb [options]"

  opts.on("-t", "--target TARGET", "Target name (Nightly, Experimental)") do |v|
    options[:target] = v
  end

  opts.on("-c", "--toolchain TOOLCHAIN", "Toolchain name") do |v|
    options[:tchain] = v
  end

  opts.on("-m", "--machine MACHINE", "Machine name") do |v|
    options[:machine] = v
  end

  opts.on("-u", "--user USER", "Username") do |v|
    AUTH[:user] = v
  end

  opts.on("-p", "--pass PASS", "Password") do |v|
    AUTH[:password] = v
  end
end.parse!

############################################################################
# Execute.                                                                 #
############################################################################

if not options[:machine].nil?
  if not (AUTH.has_key?(:user) and AUTH.has_key?(:password))
    puts('ERROR: missing username and/or password.')
    exit 0
  end

  if options[:machine] == 'All'
    VirtualBox.list_machines_cdash.each do |machine|
      vm = VirtualBox.new(machine, options[:target])
      vm.execute
    end
  else
    vm = VirtualBox.new(options[:machine], options[:target])
    vm.execute
    exit 0
  end
end

if options[:tchain].nil?
  TOOLS.each do |k, v|
    begin
      s = Builder.new(options[:target], k)
      s.execute
    rescue Exception => e
      $log.puts e.message
    end
    $log.puts()
  end
else
  s = Builder.new(options[:target], options[:tchain])
  s.execute
end
