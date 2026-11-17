/* FUN_006772e3 - 0x006772e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006772e3(void)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (*(int *)(unaff_EBP + 8) == 0xf1) {
    if (DAT_00979178 == 0) {
      uVar4 = 0;
    }
    else {
      puStack_50 = &DAT_0097bc60;
      iStack_54 = 0x6775f7;
      iVar6 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
      uVar4 = -(uint)(iVar6 != 0) & DAT_00979178;
    }
    if (uVar4 == 0) goto LAB_00677795;
    if (*(int *)(uVar4 + 0xb4) == 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0x21000003;
      puStack_50 = (undefined4 *)&DAT_00903698;
      iStack_54 = unaff_EBP + -0x2c;
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
                    /* WARNING: Subroutine does not return */
      iStack_58 = 0x677637;
      __CxxThrowException_8();
    }
    *(undefined4 *)(uVar4 + 0xb4) = 0;
    puStack_50 = (undefined4 *)0x677645;
    cVar1 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    if (cVar1 == '\x1e') {
      puStack_50 = (undefined4 *)0x677724;
      FUN_006779b3();
      puStack_50 = (undefined4 *)0x0;
      *(undefined4 *)(uVar4 + 0xb0) = 0;
      iStack_54 = 0x677732;
      FUN_008161f1();
      puStack_50 = (undefined4 *)0x0;
      iStack_54 = 0x677742;
      (**(code **)(*(int *)(*(int *)(uVar4 + 0x84) + 4) + 0x1c))();
      puStack_50 = (undefined4 *)0xd5e;
      iStack_54 = unaff_EBP + -0x40;
      iStack_58 = 0x677755;
      puStack_50 = (undefined4 *)FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_54 = 0x677762;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
LAB_00677769:
      puStack_50 = (undefined4 *)0x67776e;
      FUN_00414ebb();
      iStack_60 = extraout_ECX_00;
    }
    else {
      if (cVar1 == '\x1f') {
        puStack_50 = (undefined4 *)0xd5f;
        iStack_54 = unaff_EBP + -0x3c;
        iStack_58 = 0x677703;
        puStack_50 = (undefined4 *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_54 = 0x677710;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        goto LAB_00677769;
      }
      if (cVar1 == ' ') {
        puStack_50 = (undefined4 *)0xd60;
        iStack_54 = unaff_EBP + -0x38;
        iStack_58 = 0x6776da;
        puStack_50 = (undefined4 *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_54 = 0x6776e7;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        goto LAB_00677769;
      }
      if (cVar1 == '!') {
        puStack_50 = (undefined4 *)0xd61;
        iStack_54 = unaff_EBP + -0x34;
        iStack_58 = 0x6776ae;
        puStack_50 = (undefined4 *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_54 = 0x6776bb;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        goto LAB_00677769;
      }
      iStack_60 = extraout_ECX;
      if (cVar1 == '\"') {
        puStack_50 = (undefined4 *)0xd62;
        iStack_54 = unaff_EBP + -0x30;
        iStack_58 = 0x677682;
        puStack_50 = (undefined4 *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_54 = 0x67768f;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        goto LAB_00677769;
      }
    }
    puStack_50 = (undefined4 *)0x0;
    iStack_54 = 0;
    iStack_58 = 0;
    iStack_5c = 0;
    *(int **)(unaff_EBP + 0xc) = &iStack_60;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 0xf2) goto LAB_00677795;
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    puStack_50 = (undefined4 *)0x677317;
    cVar1 = FUN_0042452b();
    if (cVar1 == '#') {
      if (DAT_00979178 != 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -0x28) = 0x21000003;
        puStack_50 = (undefined4 *)&DAT_00903698;
        iStack_54 = unaff_EBP + -0x28;
        *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
        iStack_58 = 0x6775a8;
        __CxxThrowException_8();
      }
      puStack_50 = (undefined4 *)0xbc;
      iStack_54 = 0x6775b7;
      iVar6 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar6;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar6 != 0) {
        puStack_50 = (undefined4 *)0x6775cc;
        FUN_006777a4();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_54 = 0x6775dc;
      puStack_50 = (undefined4 *)uVar3;
      FUN_00675ea2();
      goto LAB_00677795;
    }
    if (cVar1 == '$') {
      if (DAT_00979178 == 0) {
        uVar4 = 0;
      }
      else {
        puStack_50 = &DAT_0097bc60;
        iStack_54 = 0x677526;
        iVar6 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
        uVar4 = -(uint)(iVar6 != 0) & DAT_00979178;
      }
      if (uVar4 != 0) {
        if (*(int *)(uVar4 + 0xb4) == 0) {
          *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
          *(undefined4 *)(unaff_EBP + -0x24) = 0x21000003;
          puStack_50 = (undefined4 *)&DAT_00903698;
          iStack_54 = unaff_EBP + -0x24;
          *(undefined4 *)(unaff_EBP + -4) = 0xb;
                    /* WARNING: Subroutine does not return */
          iStack_58 = 0x677566;
          __CxxThrowException_8();
        }
        puStack_50 = (undefined4 *)0x67756d;
        uVar3 = FUN_0042459a();
        puStack_50 = (undefined4 *)0x677576;
        puStack_50 = (undefined4 *)FUN_0042459a();
        iStack_58 = 0x67757f;
        iStack_54 = uVar3;
        FUN_006771e0();
      }
      goto LAB_00677795;
    }
    if (cVar1 != '%') {
      if (cVar1 == '&') {
        puStack_50 = (undefined4 *)0x0;
        iStack_54 = 0;
        iStack_58 = 0;
        iStack_5c = 0;
        *(int **)(unaff_EBP + 0xc) = &iStack_60;
        FUN_00679d22(&iStack_60,0xd5b);
        FUN_007db3ad();
      }
      goto LAB_00677795;
    }
    puStack_50 = (undefined4 *)0x677362;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    puStack_50 = (undefined4 *)0x67736c;
    uVar4 = FUN_0042459a();
    puStack_50 = (undefined4 *)0x677375;
    bVar2 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if ((uVar4 == 999999999) || (0xfd < bVar2)) {
      puStack_50 = (undefined4 *)0xd59;
      iStack_54 = unaff_EBP + -0x1c;
      iStack_58 = 0x67744d;
      puStack_50 = (undefined4 *)FUN_00679d22();
      puStack_50 = (undefined4 *)*puStack_50;
      iStack_54 = unaff_EBP + 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_58 = 0x67745c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      puStack_50 = (undefined4 *)(uint)bVar2;
      iStack_54 = 0x6773a2;
      iStack_54 = FUN_004ec897();
      puStack_50 = (undefined4 *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_58 = 0x6773b0;
      FUN_00414edd();
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_50 = (undefined4 *)0x0;
      iStack_54 = unaff_EBP + 8;
      iStack_58 = unaff_EBP + -0x14;
      iStack_60 = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x44) = &iStack_5c;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00450368();
      iStack_60 = 0x6773d7;
      FUN_007d3411();
      puStack_50 = (undefined4 *)0xd5a;
      iStack_54 = unaff_EBP + -0x18;
      iStack_58 = 0x6773ed;
      piVar5 = (int *)FUN_00679d22();
      iStack_58 = *piVar5;
      puStack_50 = (undefined4 *)(uVar4 % 100);
      iStack_5c = unaff_EBP + 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_54 = *(int *)(unaff_EBP + 8);
      iStack_60 = 0x67740a;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_50 = (undefined4 *)0x677419;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_50 = (undefined4 *)0x677425;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_50 = (undefined4 *)0x677431;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    puStack_50 = (undefined4 *)0x67746a;
    FUN_00414ebb();
    puStack_50 = (undefined4 *)0x69c;
    iStack_54 = 0x677479;
    iVar6 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar6;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      puStack_50 = (undefined4 *)0x67748b;
      iVar6 = FUN_007e62e9();
    }
    uVar4 = -(uint)(iVar6 != 0) & iVar6 + 8U;
    *(uint *)(unaff_EBP + -0x48) = -(uint)(uVar4 != 0) & uVar4 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_50 = (undefined4 *)0x6774b2;
    FUN_004c26c4();
    puStack_50 = (undefined4 *)0x0;
    iStack_54 = 0;
    iStack_5c = unaff_EBP + 0xc;
    *(int **)(unaff_EBP + -0x44) = &iStack_58;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_60 = 0x6774c7;
    FUN_00450368();
    iStack_5c = *(int *)(unaff_EBP + -0x20);
    iStack_60 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004c2677();
    FUN_007eddac();
    puStack_50 = (undefined4 *)0x0;
    iStack_54 = 0;
    iStack_58 = 0x6774e8;
    FUN_007edf11();
    puStack_50 = (undefined4 *)0x6774f0;
    FUN_007e6e3c();
    puStack_50 = (undefined4 *)0x6774f8;
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_50 = (undefined4 *)0x677504;
    FUN_004c26e1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  puStack_50 = (undefined4 *)0x677795;
  FUN_00414ebb();
LAB_00677795:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


