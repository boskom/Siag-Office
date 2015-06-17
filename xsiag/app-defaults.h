"Siag.geometry:			700x420",
"Siag*topbox.xLayout:		100%",
"Siag*topbox.yLayout:		30 30 30 30 100% 30",
"Siag*textframe.topShadowContrast:	-40",
"Siag*textframe.bottomShadowContrast:	-20",
"Siag*menubar.shadowWidth:		1",
"Siag*menubar.gridy:			0",
"Siag*menubox.orientation:		horizontal",
"Siag*menubox.borderWidth:		0",
"Siag*menubox.vSpace:			0",
"Siag*menubox.hSpace:			0",
"Siag*toolbar.shadowWidth:		1",
"Siag*toolbar.gridy:			1",
"Siag*toolbox.orientation:		horizontal",
"Siag*toolbox.borderWidth:		0",
"Siag*toolbox.Toggle.shadowWidth:	0",
"Siag*toolbox.Command.shadowWidth:	0",
"Siag*toolbox.vSpace:			0",
"Siag*toolbox.hSpace:			0",
"Siag*formatbar.shadowWidth:		1",
"Siag*formatbar.gridy:			2",
"Siag*formatbox.orientation:		horizontal",
"Siag*formatbox.borderWidth:		0",
"Siag*formatbox.Toggle.shadowWidth:	0",
"Siag*formatbox.Command.shadowWidth:	0",
"Siag*formatbox.vSpace:			0",
"Siag*formatbox.hSpace:			0",
"Siag*format_command.shadowWidth:		1",
"Siag*format_command.borderWidth:		4",
"Siag*format_command.allowResize:		False",
"Siag*Box.handle.height:			28",
"Siag*Box.handle.label:",
"Siag*text1.borderWidth:			0",
"Siag*text1.background:			white",
"Siag*textbox.borderWidth:		0",
"Siag*textbox.gridy:			3",
"Siag*gridpane.borderWidth:		0",
"Siag*gridpane.gridy:			4",
"Siag*statusbox.borderWidth:		0",
"Siag*statusbox.gridy:			5",
"Siag*statusbox.xLayout:			4 100% 4 100 4",
"Siag*statusbox.yLayout:			4 100% 4",
"Siag*label2.shadowWidth:		1",
"Siag*label2.gridx:			1",
"Siag*label2.gridy:			1",
"Siag*label3.shadowWidth:		1",
"Siag*label3.gridx:			3",
"Siag*label3.gridy:			1",
"Siag*viewport.xLayout:			25 25 50% 50% 17",
"Siag*viewport.yLayout:			20 100% 17",
"Siag*selectall.shadowWidth:		2",
"Siag*selectall.gridWidth:		2",
"Siag*selectall.label:",
"Siag*selectall.translations:		#override		\\n\
	<Enter>:		siag-highlight(3)		\\n\
	<Leave>:		siag-unhighlight(2)",
"Siag*colnum.gridx:		2",
"Siag*colnum.gridWidth:		2",
"Siag*colnum.translations:\
	<Btn1Down>:		colnum-button(set)		\\n\
	<Btn1Motion>:		colnum-button(adjust)		\\n\
	<Btn3Down>:		colnum-button(select)",
"Siag*rownum.gridy:		1",
"Siag*rownum.gridWidth:		2",
"Siag*rownum.translations:\
	<Btn1Down>:		rownum-button(set)			\\n\
	<Btn1Motion>:		rownum-button(adjust)			\\n\
	<Btn3Down>:		rownum-button(select)",
"Siag*grid.gridx:		2",
"Siag*grid.gridy:		1",
"Siag*grid.gridWidth:		2",
"Siag*grid.background:		white",
"Siag*grid.translations:\
	Shift<Btn1Down>:	grid-button(select)			\\n\
	:<Btn1Down>:		grid-button(point)			\\n\
	:<Btn2Down>:		grid-button(paste)			\\n\
	Shift<Btn3Down>:	grid-button(select)			\\n\
	:<Btn3Down>:		popup-shortcuts()			\\n\
	:<Key>F3:		popup-shortcuts()			\\n\
	:<Key>F1:		execute(help-contents)			\\n\
	:<Key>F9:		execute(recalc-matrix)			\\n\
	Ctrl<Key>Left:		execute(scroll_right)			\\n\
	Shift<Key>Left:	extend_left()				\\n\
	:<Key>Left:		backward_cell()				\\n\
	:<Key>KP_Left:		backward_cell()				\\n\
	Ctrl<Key>Right:	execute(scroll_left)			\\n\
	Shift<Key>Right:	extend_right()				\\n\
	:<Key>Right:		forward_cell()				\\n\
	:<Key>KP_Right:		forward_cell()				\\n\
	Ctrl<Key>Up:		execute(top_of_buffer)			\\n\
	Shift<Key>Up:		extend_up()				\\n\
	:<Key>Up:		previous_line()				\\n\
	:<Key>KP_Up:		previous_line()				\\n\
	Ctrl<Key>Down:		execute(bottom_of_buffer)		\\n\
	Shift<Key>Down:	extend_down()				\\n\
	:<Key>Down:		next_line()				\\n\
	:<Key>KP_Down:		next_line()				\\n\
	Ctrl<Key>Home:		execute(beginning_of_buffer)		\\n\
	:<Key>Home:		execute(beginning_of_line)		\\n\
	:<Key>KP_Home:		execute(beginning_of_line)		\\n\
	Ctrl<Key>End:		execute(end_of_buffer)			\\n\
	:<Key>End:		execute(end_of_line)			\\n\
	:<Key>KP_End:		execute(end_of_line)			\\n\
	Ctrl<Key>Page_Up:	execute(top_of_buffer)			\\n\
	:<Key>Page_Up:		execute(scroll_up)			\\n\
	Ctrl<Key>Page_Down:	execute(bottom_of_buffer)		\\n\
	:<Key>Page_Down:	execute(scroll_down)			\\n\
	:<Key>Delete:		execute(delete_cell)			\\n\
	Ctrl<Key>a:		execute(select_all)			\\n\
	Ctrl<Key>b:		execute(toggle_format BOLD)		\\n\
	Ctrl<Key>c:		copy_to_clipboard()			\\n\
	Ctrl<Key>e:		execute(new_format HADJ HADJ_CENTER)	\\n\
	Ctrl<Key>f:		execute(search_forward)			\\n\
	Ctrl<Key>g:		execute(go_to)				\\n\
	Ctrl<Key>i:		execute(toggle_format ITALIC)		\\n\
	Ctrl<Key>l:		execute(recenter)			\\n\
	Ctrl<Key>n:		execute(new_buffer)			\\n\
	Ctrl<Key>o:		execute(load_buffer)			\\n\
	Ctrl<Key>p:		execute(print)				\\n\
	Ctrl<Key>q:		execute(quit_program)			\\n\
	Ctrl<Key>r:		execute(new_format HADJ HADJ_RIGHT)	\\n\
	Ctrl<Key>s:		execute(save_buffer_as)			\\n\
	Ctrl<Key>t:		execute(add_sheet)			\\n\
	Ctrl<Key>u:		execute(toggle_format ULINE)		\\n\
	Ctrl<Key>v:		paste_from_clipboard()			\\n\
	Ctrl<Key>w:		execute(remove_sheet)			\\n\
	Ctrl<Key>x:		cut_to_clipboard()			\\n\
	Ctrl<Key>z:		execute(undo_restore)			\\n\
	<Key>:			key-event()",
"Siag*tabl.gridy:		2",
"Siag*tabl.label:		<<",
"Siag*tabr.gridx:		1",
"Siag*tabr.gridy:		2",
"Siag*tabr.label:		>>",
"Siag*tab.gridx:			2",
"Siag*tab.gridy:			2",
"Siag*hscroll.gridx:		3",
"Siag*hscroll.gridy:		2",
"Siag*hscroll.orientation:	Horizontal",
"Siag*vscroll.gridx:		4",
"Siag*vscroll.gridHeight:	2",
"Siag*vscroll.orientation:	Vertical",
"Siag*combo_viewport.allowHoriz:		False",
"Siag*vsep.width:		2",
"Siag*vsep.height:		24",
"Siag*vsep.borderWidth:		2",
"Siag*vsep.shadowWidth:		1",
"Siag*vsep.topShadowContrast:	-40",
"Siag*vsep.bottomShadowContrast:	-20",
"Siag*vsep.label:",
"Siag*toolbar_command.translations:	#override	\\n\
	<Enter>:	siag-highlight(1)		\\n\
	<Leave>:	siag-unhighlight(0)",
"Siag*toolbar_toggle.translations:	#override	\\n\
	<Enter>:	siag-highlight(1 1)		\\n\
	<Leave>:	siag-unhighlight(0 1)",
"Siag*label1.label:",
"Siag*edit_text.background:	white",
"Siag*edit_text.richtextLeftMargin: 5",
"Siag*edit_text.translations:	#override\\n\
	<Key>Return:		celledit-done()\\n\
	<Key>KP_Enter:		celledit-done()\\n\
	<Key>Escape:		celledit-cancel()\\n\
	<Key>Down:		celledit-done(Down)",
"Siag*text1.translations:	#override\\n\
	<Key>Return:		celledit-done()\\n\
	<Key>Escape:		celledit-cancel()",
"Siag*plugin-parent.translations:\
	<Btn1Down>:		plugin-resize()	\\n\
	:<Motion>:		plugin-cursor()",
"Siag*font_pshell.x:		80",
"Siag*font_pshell.y:		80",
"Siag*font_okbutton.width:		80",
"Siag*font_cancelbutton.width:	80",
"Siag*alert*borderWidth:		0",
"Siag*alert*topbox.orientation:	vertical",
"Siag*alert*buttonbox.orientation:	horizontal",
"Siag*listshell*borderWidth:	0",
"Siag*listshell*topbox.orientation:	horizontal",
"Siag*listshell*listbox.orientation:	vertical",
"Siag*listshell*viewport.forceBars:	True",
"Siag*listshell*viewport.borderWidth:	1",
"Siag*listshell*buttonbox.orientation:	vertical",
"Siag*form_shell*MenuButton.shadowWidth:	1",
