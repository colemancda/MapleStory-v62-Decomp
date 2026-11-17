/* FUN_004eb6c6 - 0x004eb6c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eb6c6(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  *(undefined4 *)(DAT_00978368 + 0x208c) = 0;
  uStack_18 = 0x4eb6e8;
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(iVar1 + 0x2090) = uVar3;
  uStack_18 = 0x4eb6f6;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\x01') {
    uStack_18 = 0x183;
    iStack_1c = unaff_EBP + -0x18;
    uStack_20 = 0x4eb7ed;
    iStack_1c = FUN_00679d22();
    uStack_18 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x4eb7f8;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else if (cVar2 == '\x02') {
    uStack_18 = 0xb63;
    iStack_1c = unaff_EBP + -0x14;
    uStack_20 = 0x4eb7c0;
    iStack_1c = FUN_00679d22();
    uStack_18 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_20 = 0x4eb7cf;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 == '\x04') {
        iStack_1c = 0;
        *(undefined1 **)(unaff_EBP + 8) = auStack_28;
        uVar3 = 0xb65;
      }
      else {
        if (cVar2 == '\x05') {
          uStack_18 = 0xb64;
          iStack_1c = unaff_EBP + 8;
          uStack_20 = 0x4eb752;
          iStack_1c = FUN_00679d22();
          uStack_18 = 0xc;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          uStack_20 = 0x4eb761;
          FUN_00471102();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_004eb801;
        }
        if (cVar2 != '\x06') goto LAB_004eb806;
        iStack_1c = 1;
        *(undefined1 **)(unaff_EBP + 8) = auStack_28;
        uVar3 = 0xb83;
      }
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      FUN_00679d22(auStack_28,uVar3);
      FUN_007db3ad();
      goto LAB_004eb806;
    }
    uStack_18 = 0xb64;
    iStack_1c = unaff_EBP + -0x10;
    uStack_20 = 0x4eb793;
    iStack_1c = FUN_00679d22();
    uStack_18 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uStack_20 = 0x4eb7a2;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
LAB_004eb801:
  uStack_18 = 0x4eb806;
  FUN_00414ebb();
LAB_004eb806:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


