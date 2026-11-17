/* FUN_0070b05e - 0x0070b05e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070b05e(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_24;
  undefined *puStack_20;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x580) = 1;
  if (DAT_0097926c != 0) {
    puStack_20 = (undefined *)
                 CONCAT22((short)((uint)*(undefined2 **)(extraout_ECX + 0x5a0) >> 0x10),
                          **(undefined2 **)(extraout_ECX + 0x5a0));
    iStack_24 = unaff_EBP + -0x18;
    FUN_00704b95();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puStack_20 = (undefined *)(unaff_EBP + -0x14);
    iStack_24 = 0x70b0a9;
    FUN_0070af9c();
    puStack_20 = &DAT_00964730;
    iStack_24 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004653c5();
    puStack_20 = (undefined *)(unaff_EBP + -0x14);
    iStack_24 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_20 = (undefined *)0x70b0dd;
    FUN_00414ebb();
    puStack_20 = (undefined *)0x96;
    *(int **)(unaff_EBP + -0x20) = &iStack_24;
    FUN_00450368(unaff_EBP + -0x10);
    iVar1 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = (**(code **)(iVar1 + 0x30))();
    iVar1 = iVar1 + 0x14 + *(int *)(extraout_ECX + 0x58c);
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
    FUN_0074d8fb(iVar2 + 0x14 + *(int *)(extraout_ECX + 0x588),iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_20 = (undefined *)0x70b131;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_20 = (undefined *)0x70b13d;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_20 = (undefined *)0x70b149;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


