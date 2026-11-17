/* FUN_005362ad - 0x005362ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005362ad(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 **ppuStack_18;
  undefined1 *local_8;
  
  ppuStack_18 = (undefined1 **)0x98967f;
  uStack_1c = 0x6d;
  local_8 = (undefined1 *)&iStack_24;
  iStack_24 = param_1;
  iStack_20 = param_1;
  FUN_00537987(param_1 + 0x90);
  iVar1 = FUN_0053245c();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    ppuStack_18 = &local_8;
    uStack_1c = 0x5362eb;
    puVar2 = (undefined4 *)FUN_0045b90e();
    ppuStack_18 = (undefined1 **)*puVar2;
    uStack_1c = 0x5362f2;
    iVar1 = FUN_0087b6ab();
    ppuStack_18 = (undefined1 **)0x5362fd;
    FUN_00414ebb();
    *(int *)(param_1 + 0x74) =
         (iVar1 - ((iVar1 - *(int *)(param_1 + 0x7c)) * *(int *)(param_1 + 0x78)) / 100) -
         *(int *)(param_1 + 0x7c);
  }
  ppuStack_18 = (undefined1 **)0x0;
  uStack_1c = 0x536325;
  FUN_008161f1();
  return;
}


