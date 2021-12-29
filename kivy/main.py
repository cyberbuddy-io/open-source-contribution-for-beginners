from kivymd.app import MDApp
from kivy.uix.boxlayout import BoxLayout
from kivymd.uix.filemanager import FloatButton
from kivymd.uix.screen import Screen
from pathlib import Path
import datetime


class FileChooser(BoxLayout):
    def file_selected(self,*args):
        selection = args[1][0]
        print(selection)

class FileApp(MDApp):
    def build(self):
        self.theme_cls.theme_style = "Dark"
        return FileChooser()

FileApp().run()