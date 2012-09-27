" Vim syntax file
" Language: Delta Scripting Language
" Maintainer: Roc Ramon
" Latest Revision: 27 September 2012

if exists("b:current_syntax")
  finish
endif

" Keywords
syn keyword dtKeyword fun var proto if elif else while for in break continue end return

" Integer with - or nothing in front
syn match dtNumber '\d\+'
syn match dtNumber '[-]\d\+'

" Floating point number with decimal no E or e (-)
syn match dtNumber '\d\+\.\d*'
syn match dtNumber '[-]\d\+\.\d*'

" Hex Integer
syn match dtNumber '0x[0-9a-fA-F]\+'

" Octal
syn match dtNumber '0o[0-7]\+'

" Bin
syn match dtNumber '0b[01]\+'


" Comments
syn region dtComment start="//" end="$"
syn region dtBlockComment start="//{" end="//}" skip="///" contains=dtBlockComment


" Strings
syntax region dtString start=/\v"/ skip=/\v\\./ end=/\v"/


"""""""""""""""""""""""""""""""""""""""""""""""""""""
"""""""""""""""""""""""""""""""""""""""""""""""""""""
"""""""""""""""""""""""""""""""""""""""""""""""""""""

let b:current_syntax = "delta"

hi def link			dtKeyword				Keyword

hi def link			dtNumber				Number

hi def link			dtBlockComment			Comment
hi def link			dtComment				Comment

hi def link			dtString				String


