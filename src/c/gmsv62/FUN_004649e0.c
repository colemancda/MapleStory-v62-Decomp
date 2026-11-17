/* FUN_004649e0 - 0x004649e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004649e0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  uStack_1c = 0x4649ff;
  FUN_0042459a();
  uStack_1c = 0x464a07;
  cVar1 = FUN_0042452b();
  uStack_1c = 0x464a12;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  if (cVar1 == '\0') {
    uStack_1c = 0xa8;
    uStack_20 = 0x464a84;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      uStack_20 = 0x464a96;
      iVar3 = FUN_006a4a1b();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar4 != 0) & uVar4 - 8;
    uStack_1c = 0x464abd;
    FUN_0046547e();
    uStack_1c = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_20 = 0x464ace;
    FUN_006a52a8();
    uStack_1c = 0x464ad6;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_1c = 0x464ae2;
    FUN_0046549b();
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      uVar2 = 0x216;
    }
    else if (cVar1 == '\x02') {
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      uVar2 = 0x217;
    }
    else if (cVar1 == '\x03') {
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      uVar2 = 0x218;
    }
    else {
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      uVar2 = 0xdaa;
    }
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    FUN_00679d22(auStack_2c,uVar2);
    FUN_007db3ad();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


