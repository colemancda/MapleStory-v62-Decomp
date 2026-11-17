/* FUN_0046422a - 0x0046422a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046422a(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iStack_20 = 8;
  iStack_24 = unaff_EBP + -0x1c;
  iStack_28 = 0x46424a;
  FUN_004245d2();
  iStack_20 = 0x464252;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  uVar5 = 0;
  piVar1 = (int *)(extraout_ECX + 0x488);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while( true ) {
    if ((*piVar1 == 0) || (*(uint *)(*piVar1 + -4) <= uVar5)) goto LAB_00464293;
    piVar3 = (int *)(*(int *)(unaff_EBP + 8) + *piVar1);
    if ((*piVar3 == *(int *)(unaff_EBP + -0x1c)) && (piVar3[1] == *(int *)(unaff_EBP + -0x18)))
    break;
    uVar5 = uVar5 + 1;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x37;
  }
  iStack_20 = uVar5 * 0x37 + *piVar1;
  iStack_24 = 0x464293;
  FUN_004657d7();
LAB_00464293:
  iStack_20 = 0;
  iStack_24 = 0x4642a1;
  FUN_008161f1();
  iStack_20 = 1;
  iStack_24 = 0x4642aa;
  FUN_00489a0e();
  iStack_20 = 0;
  iStack_24 = 0x4642b6;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_20 = 0x23e;
  iStack_24 = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_28 = 0x4642cf;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_24 = *puVar4;
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_28 = unaff_EBP + -0x10;
  uStack_2c = 0x4642e2;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x4642f0;
  FUN_00414ebb();
  iStack_20 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  uStack_2c = 0;
  *(undefined1 **)(unaff_EBP + -0x14) = auStack_30;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x464317;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


