/* FUN_0053750f - 0x0053750f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0053750f(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
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
  FUN_00537987(param_1 + 0x9c);
  iVar1 = FUN_0053245c();
  iVar3 = extraout_ECX;
  if (iVar1 != 0) {
    ppuStack_18 = &local_8;
    uStack_1c = 0x53754e;
    puVar2 = (undefined4 *)FUN_0045b90e();
    ppuStack_18 = (undefined1 **)*puVar2;
    uStack_1c = 0x537555;
    iVar1 = FUN_0087b6ab();
    ppuStack_18 = (undefined1 **)0x537560;
    FUN_00414ebb();
    iVar3 = 100;
    *(int *)(param_1 + 0x74) =
         (*(int *)(param_1 + 0x7c) * iVar1) / 100 + *(int *)(param_1 + 0x80) + iVar1;
  }
  ppuStack_18 = (undefined1 **)0x98967f;
  uStack_1c = 0x6d;
  local_8 = (undefined1 *)&iStack_24;
  iStack_24 = iVar3;
  iStack_20 = iVar3;
  FUN_00537987(param_1 + 0xa4);
  iVar3 = FUN_0053245c();
  if (iVar3 != 0) {
    ppuStack_18 = &local_8;
    uStack_1c = 0x5375a8;
    puVar2 = (undefined4 *)FUN_0045b90e();
    ppuStack_18 = (undefined1 **)*puVar2;
    uStack_1c = 0x5375af;
    iVar3 = FUN_0087b6ab();
    ppuStack_18 = (undefined1 **)0x5375ba;
    FUN_00414ebb();
    *(int *)(param_1 + 0x78) =
         (*(int *)(param_1 + 0x7c) * iVar3) / 100 + *(int *)(param_1 + 0x80) + iVar3;
  }
  ppuStack_18 = (undefined1 **)0x0;
  uStack_1c = 0x5375db;
  FUN_008161f1();
  return;
}


