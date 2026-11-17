/* FUN_0086ea60 - 0x0086ea60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0086ea60(void)

{
  char cVar1;
  HANDLE hObject;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined4 local_124 [4];
  undefined1 auStack_114 [276];
  
  cVar1 = FUN_0086e980();
  if (cVar1 != '\0') {
    uStack_134 = 0;
    puVar4 = local_124;
    for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_138 = (undefined1 *)0x2;
    hObject = (HANDLE)(*DAT_0097f908)();
    if (hObject != (HANDLE)0xffffffff) {
      puStack_138 = &stack0xfffffed0;
      iVar3 = (*DAT_0097f7f8)(hObject);
      if (iVar3 != 0) {
        if (DAT_0097fc64 == 0) goto LAB_0086eb1c;
        uVar2 = FUN_00875080(&DAT_0096e6ac);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
        do {
          if (DAT_0097fc64 != 0) {
            uVar2 = FUN_00875080(&DAT_0096e688,auStack_114,0x128,local_124[0],local_124[2]);
            FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
          }
LAB_0086eb1c:
          iVar3 = (*DAT_0097fb20)(hObject,&puStack_138);
        } while (iVar3 != 0);
      }
      CloseHandle(hObject);
    }
  }
  return;
}


