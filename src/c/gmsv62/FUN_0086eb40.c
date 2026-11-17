/* FUN_0086eb40 - 0x0086eb40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0086eb40(void)

{
  char cVar1;
  HANDLE hObject;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_234;
  DWORD DStack_230;
  undefined4 local_220 [3];
  undefined1 auStack_214 [256];
  undefined1 auStack_114 [276];
  
  cVar1 = FUN_0086e980();
  if (cVar1 != '\0') {
    puVar4 = local_220;
    for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DStack_230 = 0x86eb70;
    DStack_230 = GetCurrentProcessId();
    puStack_234 = (undefined1 *)0x8;
    hObject = (HANDLE)(*DAT_0097f908)();
    if (hObject != (HANDLE)0xffffffff) {
      puStack_234 = &stack0xfffffdd4;
      iVar3 = (*DAT_0097fb1c)(hObject);
      if (iVar3 != 0) {
        if (DAT_0097fc64 == 0) goto LAB_0086ec05;
        uVar2 = FUN_00875080(&DAT_0096e700);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
        do {
          if (DAT_0097fc64 != 0) {
            uVar2 = FUN_00875080(&DAT_0096e6e0,auStack_214,local_220[0],local_220[1],auStack_114);
            FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
          }
LAB_0086ec05:
          iVar3 = (*DAT_0097f7fc)(hObject,&puStack_234);
        } while (iVar3 != 0);
      }
      CloseHandle(hObject);
    }
  }
  return;
}


