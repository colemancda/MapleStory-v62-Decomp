/* FUN_0084b71d - 0x0084b71d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084b71d(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  FUN_00879bb8();
  uStack_24 = 0x84b739;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uStack_24 = unaff_EBP + -0x14;
    uStack_28 = 0x84b780;
    FUN_0045cdbc();
    uStack_24 = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_28 = 0x84b78e;
    FUN_0045cdbc();
    uStack_24 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_28 = 0x84b79d;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_24 = 0x84b7a8;
    uVar2 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    uStack_24 = 0x84b7b2;
    uVar2 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    uStack_24 = 0x84b7bc;
    iVar3 = FUN_0042459a();
    *(int *)(extraout_ECX + 0x3298) = iVar3 * 1000;
    if (DAT_0097bcec == 0) {
      uStack_24 = 0x84b7d7;
      FUN_0084ea46();
      iVar3 = DAT_0097bcec;
      uStack_24 = *(int *)(extraout_ECX + 0x3298);
      uStack_28 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_34 = unaff_EBP + 8;
      uStack_2c = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined1 **)(unaff_EBP + -0x1c) = auStack_30;
      iStack_38 = 0x84b7f4;
      FUN_00450368();
      iStack_38 = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x18) = &iStack_34;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00450368();
      *(int **)(unaff_EBP + -0x20) = &iStack_38;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00450368(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_006a1857();
      uVar4 = -(uint)(iVar3 != 0) & iVar3 + 4U;
      uStack_28 = 0x84b83a;
      uStack_24 = uVar4;
      FUN_008180db();
      uStack_28 = 0x84b846;
      uStack_24 = uVar4;
      FUN_00817f6e();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_24 = 0x84b852;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_24 = 0x84b85d;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_24 = 0x84b869;
    FUN_00414ebb();
  }
  else if (cVar1 == '\x01') {
    if (DAT_0097bcec != 0) {
      uStack_24 = 0x84b758;
      FUN_00815de9();
      if (DAT_0097bcec != 0) {
        uStack_24 = 1;
        uStack_28 = 0x84b76a;
        (*(code *)**(undefined4 **)(DAT_0097bcec + 8))();
      }
    }
    *(undefined4 *)(extraout_ECX + 0x3298) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


