﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Partial Classes

This file is generated by: Vczh GacUI Resource Code Generator
************************************************************************
DO NOT MODIFY
***********************************************************************/

#ifndef VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_PARTIAL_CLASSES
#define VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_PARTIAL_CLASSES

#include "GacUIReflection.h"

namespace demo
{
	class MainWindow;

	template<typename TImpl>
	class MainWindow_ : public vl::presentation::controls::GuiWindow, public vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
	protected:
		vl::presentation::controls::GuiToolstripCommand* commandAbout;
		vl::presentation::controls::GuiToolstripCommand* commandEditCopy;
		vl::presentation::controls::GuiToolstripCommand* commandEditCut;
		vl::presentation::controls::GuiToolstripCommand* commandEditDelete;
		vl::presentation::controls::GuiToolstripCommand* commandEditFind;
		vl::presentation::controls::GuiToolstripCommand* commandEditPaste;
		vl::presentation::controls::GuiToolstripCommand* commandEditRedo;
		vl::presentation::controls::GuiToolstripCommand* commandEditSelect;
		vl::presentation::controls::GuiToolstripCommand* commandEditUndo;
		vl::presentation::controls::GuiToolstripCommand* commandFileExit;
		vl::presentation::controls::GuiToolstripCommand* commandFileNewText;
		vl::presentation::controls::GuiToolstripCommand* commandFileNewXml;
		vl::presentation::controls::GuiToolstripCommand* commandFileOpen;
		vl::presentation::controls::GuiToolstripCommand* commandFileOpenText;
		vl::presentation::controls::GuiToolstripCommand* commandFileOpenXml;
		vl::presentation::controls::GuiToolstripCommand* commandFileSave;
		vl::presentation::controls::GuiToolstripCommand* commandFileSaveAs;
		vl::presentation::controls::GuiOpenFileDialog* dialogOpen;
		vl::presentation::controls::GuiMessageDialog* dialogQueryClose;
		vl::presentation::controls::GuiSaveFileDialog* dialogSave;
		vl::presentation::controls::GuiWindow* self;
		vl::presentation::controls::GuiMultilineTextBox* textBox;

		void InitializeComponents()
		{
			if (InitializeFromResource())
			{
				GUI_INSTANCE_REFERENCE(commandAbout);
				GUI_INSTANCE_REFERENCE(commandEditCopy);
				GUI_INSTANCE_REFERENCE(commandEditCut);
				GUI_INSTANCE_REFERENCE(commandEditDelete);
				GUI_INSTANCE_REFERENCE(commandEditFind);
				GUI_INSTANCE_REFERENCE(commandEditPaste);
				GUI_INSTANCE_REFERENCE(commandEditRedo);
				GUI_INSTANCE_REFERENCE(commandEditSelect);
				GUI_INSTANCE_REFERENCE(commandEditUndo);
				GUI_INSTANCE_REFERENCE(commandFileExit);
				GUI_INSTANCE_REFERENCE(commandFileNewText);
				GUI_INSTANCE_REFERENCE(commandFileNewXml);
				GUI_INSTANCE_REFERENCE(commandFileOpen);
				GUI_INSTANCE_REFERENCE(commandFileOpenText);
				GUI_INSTANCE_REFERENCE(commandFileOpenXml);
				GUI_INSTANCE_REFERENCE(commandFileSave);
				GUI_INSTANCE_REFERENCE(commandFileSaveAs);
				GUI_INSTANCE_REFERENCE(dialogOpen);
				GUI_INSTANCE_REFERENCE(dialogQueryClose);
				GUI_INSTANCE_REFERENCE(dialogSave);
				GUI_INSTANCE_REFERENCE(self);
				GUI_INSTANCE_REFERENCE(textBox);
			}
			else
			{
			}
		}
	public:
		MainWindow_()
			:vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>(L"demo::MainWindow")
			,vl::presentation::controls::GuiWindow(vl::presentation::theme::GetCurrentTheme()->CreateWindowStyle())
			,commandAbout(0)
			,commandEditCopy(0)
			,commandEditCut(0)
			,commandEditDelete(0)
			,commandEditFind(0)
			,commandEditPaste(0)
			,commandEditRedo(0)
			,commandEditSelect(0)
			,commandEditUndo(0)
			,commandFileExit(0)
			,commandFileNewText(0)
			,commandFileNewXml(0)
			,commandFileOpen(0)
			,commandFileOpenText(0)
			,commandFileOpenXml(0)
			,commandFileSave(0)
			,commandFileSaveAs(0)
			,dialogOpen(0)
			,dialogQueryClose(0)
			,dialogSave(0)
			,self(0)
			,textBox(0)
		{
		}
	};

}
namespace vl
{
	namespace reflection
	{
		namespace description
		{
			DECL_TYPE_INFO(demo::MainWindow)

		}
	}
}

#endif
