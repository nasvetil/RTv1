#include "rtv1.h"

/*
** **************************************************************************
**	void ft_gui_elem_set_event(t_list *list, int type, void *func)
**
**	Function that set event for gui element.
** **************************************************************************
*/

void	ft_gui_elem_set_event(t_list *list, void *func, int type, int code)
{
	t_gui_elem	*elem;
	t_gui_event	event;
	t_list		*new_list;

	elem = list->content;
	event.type = type;
	event.func = func;
	event.code = code;
	event.elem = list;
	new_list = ft_lstnew(&event, sizeof(t_gui_event));
	if (elem->events == NULL)
		elem->events = new_list;
	else
		ft_lstadd(&elem->events, new_list);
}

/*
** **************************************************************************
**	void ft_gui_elem_set_event(t_list *list, int type, void *func)
**
**	Function that set redraw function for gui element.
** **************************************************************************
*/

void	ft_gui_elem_set_redraw(t_list *list, void *func)
{
	t_gui_elem	*elem;

	elem = list->content;
	elem->redraw = func;
}

/*
** **************************************************************************
**	void ft_gui_elem_set_redraw_font(t_list *list, void *func)
**
**	Function that set redraw font function for gui element.
** **************************************************************************
*/

void	ft_gui_elem_set_redraw_font(t_list *list, void *func)
{
	t_gui_elem	*elem;

	elem = list->content;
	elem->redraw_font = func;
}
