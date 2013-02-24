;; dune c++ mode for emacs!
;;
;; To use this mode you can either:
;; * copy this file's contents to your .emacs,
;; OR,
;; * load the file by placing the following line in your .emacs:
;; (autoload 'dune-c++-mode "/path/to/EmacsCodeStyle.el" "Enter DUNE mode." t)
;;
;; Moreover, to automatically enter dune-c++-mode, you must add the following
;; lines to your .emacs (after the pasted mode definition/autoloading)
;;
;;
;; (setq auto-mode-alist
;;   (append '((".*dune.*/.*\\.cpp$" . dune-c++-mode)
;;         (".*dune.*/.*\\.hpp$" . dune-c++-mode))
;;           auto-mode-alist))
;;
;; Good luck!

(defun dune-c++-mode ()
  "C++ mode adjusted for DUNE development"
  (interactive)
  (c++-mode)
  ;; Derive dune style from the GNU style
  (c-set-style "GNU")
  ;; Do not use tabs ever!
  (setq indent-tabs-mode nil)
  ;; Make spurious whitespace easier to spot
  (setq show-trailing-whitespace t)
  ;; Customize some offsets
  (c-set-offset 'substatement-open 0)
  (c-set-offset 'brace-list-open 0)
  (c-set-offset 'brace-list-intro 2)
  (c-set-offset 'statement-cont 0)
  (c-set-offset 'case-label 2))
