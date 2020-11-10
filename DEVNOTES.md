# Developer Notes
This file is notes that the developer has made while developing the plugin. This may be useful, especially on Windows.

# gimptool doesn't work in PowerShell
This is due to the arguments that gimptool takes. Here's what happens if you try:

```powershell
➜  glimpse-rpc git:(main) ✗ "C:\Program Files\Glimpse Image Editor\Glimpse 0.2.0 (64-bit)\bin\gimptool-2.0.exe" --install plugin.c    
At line:1 char:87
+ ... Editor\Glimpse 0.2.0 (64-bit)\bin\gimptool-2.0.exe" --install plugin. ...
+                                                           ~~~~~~~
Unexpected token 'install' in expression or statement.
At line:1 char:1
+ "C:\Program Files\Glimpse Image Editor\Glimpse 0.2.0 (64-bit)\bin\gim ...
+ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
The '--' operator works only on variables or on properties.
    + CategoryInfo          : ParserError: (:) [], ParentContainsErrorRecordException
    + FullyQualifiedErrorId : UnexpectedToken
```

**Solution:** Run the command in Command Prompt (cmd.exe) instead. Yes, I am serious.

# pkg-config not found
Even after overcoming the PowerShell hurdles! We still have more problems to go over.

Here's what happens if you try:
```powershell
C:\Users\NameI\code\glimpse-rpc>"C:\Program Files\Glimpse Image Editor\Glimpse 0.2.0 (64-bit)\bin\gimptool-2.0.exe" --install plugin.c
'pkg-config' is not recognized as an internal or external command,
operable program or batch file.
No output from 'pkg-config --cflags gimpui-2.0'
```

**Solution:** TBA. I haven't worked on finding a solution yet, but it should be relatively simple