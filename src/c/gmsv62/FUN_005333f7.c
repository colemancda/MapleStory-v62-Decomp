/* FUN_005333f7 - 0x005333f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005333f7(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 **ppuStack_14;
  undefined1 *local_8;
  
  ppuStack_14 = (undefined1 **)0x98967f;
  uStack_18 = 0x6d;
  local_8 = (undefined1 *)&iStack_20;
  iStack_20 = param_1;
  iStack_1c = param_1;
  FUN_00537987(param_1 + 0x90);
  iVar1 = FUN_0053245c();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    ppuStack_14 = &local_8;
    uStack_18 = 0x533434;
    puVar2 = (undefined4 *)FUN_0045b90e();
    ppuStack_14 = (undefined1 **)*puVar2;
    uStack_18 = 0x53343b;
    iVar1 = FUN_0087b6ab();
    ppuStack_14 = (undefined1 **)0x533446;
    FUN_00414ebb();
    *(int *)(param_1 + 0x74) =
         (*(int *)(param_1 + 0x78) * iVar1) / 100 + *(int *)(param_1 + 0x7c) + iVar1;
  }
  ppuStack_14 = (undefined1 **)0x0;
  uStack_18 = 0x53346a;
  FUN_008161f1();
  return;
}


