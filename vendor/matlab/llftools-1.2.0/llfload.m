%+--------------------------------------------------------------------------+
%| Copyright (C) 2007-2015 Laboratório de Sistemas e Tecnologia Subaquática |
%| Departamento de Engenharia Electrotécnica e de Computadores              |
%| Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          |
%+--------------------------------------------------------------------------+
%| Author: Ricardo Martins                                                  |
%+--------------------------------------------------------------------------+
%| $Id:: llfload.m 553 2012-12-19 17:52:57Z rasm                          $:|
%+--------------------------------------------------------------------------+
%
% LLFLOAD Load LSTS Log File(s)
%   LLFLOAD(PATH, WS, SILENT) loads file in LSTS Log Format to the workspace
%   WS. If PATH is a directory, then all files in that directory will be
%   loaded. If the flag SILENT is set, output will only be displayed when
%   errors occur.
%
%   Version 1.2.0
%
% Example:
%   llfload('c:\logs')
%

function llfload(varargin)

  if nargin < 1
    error('At least one argument is required')
  else
    file_name = varargin{1};
    if nargin > 1
      ws = varargin{2};
      if nargin > 2
        silent = varargin{3};
        if nargin > 3
          disp('Discarding extra arguments.');
        end
      else
        silent = 0;
      end
    else
      ws = 'base';
      silent = 0;
    end
  end

  if ~silent
    disp(['Loading ', file_name, '...']);
  end

  if exist(file_name) == 7
    ctx = dir(sprintf('%s/*.llf', file_name));
    r = length(ctx);
    for i = 1:1:r;
        full_path = sprintf('%s/%s', file_name, ctx(i,1).name);
        llfload(full_path, ws, silent);
        if evalin(ws,['exist(''' ctx(i,1).name ''')'])
            continue;
        else
            full_name = textscan(ctx(i,1).name,'%s','delimiter',sprintf('.'));
            msg_name = cell2mat(full_name{1}(1));
            try
                eval(['newmsg = ' msg_name ';']);
                assignin(ws,msg_name,newmsg);
            catch
                % could throw a warning here
                % yet something below will throw a warning anyway
                continue;
            end
        end
    end
    return;
  end

  fd = fopen(file_name, 'r');

  if (fd < 0)
    error(sprintf('Unable to open log file %s', file_name));
  end

  % Validate magic number.
  magic = fgetl(fd);
  if ~strcmp(magic, '#LLF1')
      error(sprintf('File %s is not in LLF', file_name));
  end

  types_fmt = '';

  message_name = regexprep(file_name, '\.llf', '');
  message_name = regexprep(message_name, '.*/', '');

  % Parse meta data and convert field types.
  for i = 1:10,
    line = fgetl(fd);
    if line(1) ~= '#'
        field_names = regexprep(line, '\t', sprintf(', %s.', message_name));
        field_names = sprintf('%s.%s', message_name, field_names);
        break
    end
    [s, r] = strtok(line);
    if strcmp(s, '#types:')
        remain = r;
        while true
            [str, remain] = strtok(remain);
            if isempty(str),  break;  end
            if strcmp(str, 'fp32_t')
                types_fmt = [types_fmt, '%f '];
            elseif strcmp(str, 'fp64_t')
                types_fmt = [types_fmt, '%f '];
            elseif strcmp(str, 'int8_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'uint8_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'int16_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'uint16_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'int32_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'uint32_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'int64_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'uint64_t')
                types_fmt = [types_fmt, '%d '];
            elseif strcmp(str, 'plaintext')
                types_fmt = [types_fmt, '%[^\t\r\n] '];
            elseif strcmp(str, 'rawdata')
                types_fmt = [types_fmt, '%[^\t\r\n] '];
            elseif strcmp(str, 'message')
                types_fmt = [types_fmt, '%[^\t\r\n] '];
            elseif strcmp(str, 'message-list')
                types_fmt = [types_fmt, '%[^\t\r\n] '];
            end
        end
    end
  end
  fclose(fd);

  cmd = sprintf('[%s] = textread(''%s'', ''%s'', ''headerlines'', %d);', field_names, file_name, types_fmt, i + 1);

  try
    evalin(ws, cmd)

    % Check if all arrays have the same size.
    remain = field_names;
    min = evalin(ws, sprintf('size(%s.timestamp)', message_name));
    ref = min(1);
    min = ref;
    while true
      [str, remain] = strtok(remain, ',');
      if isempty(str),  break;  end
      size = evalin(ws, sprintf('size(%s)', str));
      if (size(1) < min)
        min = size(1);
      end
    end

    % If not trim the array.
    if min < ref
      remain = field_names;
      while true
        [str, remain] = strtok(remain, ',');
        if isempty(str),  break;  end
        evalin(ws, sprintf('%s = %s(1:%d);', str, str, min));
      end
    end
  catch
    disp(['Error loading file ', file_name,' (',lasterr,')']);
  end
