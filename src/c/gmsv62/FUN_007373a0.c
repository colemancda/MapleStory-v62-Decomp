/* FUN_007373a0 - 0x007373a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007373a0(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_b4;
  int *piStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined *puStack_9c;
  int *piStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  puStack_64 = (undefined1 *)0x7373bd;
  FUN_0081622a();
  puStack_64 = (undefined1 *)0x7373cc;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_64 = (undefined1 *)0x7373ef;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x737409;
  puVar3 = (undefined4 *)FUN_00679d22();
  puStack_64 = (undefined1 *)*puVar3;
  iStack_68 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_6c = 0x73741b;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_64 = (undefined1 *)0x737432;
    FUN_00434e38();
  }
  puStack_64 = *(undefined1 **)(extraout_ECX + 0x90);
  iStack_68 = unaff_EBP + -0x20;
  iStack_6c = 0x737444;
  puVar3 = (undefined4 *)FUN_00737ec6();
  puStack_64 = (undefined1 *)0x737451;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
             (IBinding *)*puVar3);
  FUN_004125e6();
  iVar5 = *(int *)(extraout_ECX + 0x90);
  if (iVar5 == 0x40) {
    puStack_64 = (undefined1 *)(iVar2 + 0x41);
LAB_007376c1:
    iStack_68 = 0x7376c7;
    FUN_0045f084();
    iStack_68 = unaff_EBP + -0x10;
    puStack_64 = &DAT_0096477c;
    iStack_6c = 0x7376d8;
    FUN_00434e21();
  }
  else {
    if (iVar5 == 0x80) {
      puStack_64 = (undefined1 *)(iVar2 + 0x49);
      goto LAB_007376c1;
    }
    if (iVar5 == 0x100) {
      puStack_64 = (undefined1 *)(iVar2 + 0x51);
      goto LAB_007376c1;
    }
    if (iVar5 == 0x200) {
      puStack_64 = (undefined1 *)(iVar2 + 0x59);
      goto LAB_007376c1;
    }
    if (iVar5 == 0x800) {
      FUN_0087a1b0();
      puStack_64 = (undefined1 *)(iVar2 + 0x69);
      iStack_68 = 0x7375c2;
      uVar4 = FUN_0045f084();
      iStack_68 = *(undefined4 *)(iVar2 + 0x3d);
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      uStack_70 = 0x7375d1;
      iStack_6c = iVar2 + 0x39;
      sVar1 = FUN_0045f084();
      iVar5 = (int)sVar1 / 100;
      if (iVar5 == 0) {
        iStack_68 = 8;
      }
      else if (iVar5 == 1) {
        iStack_68 = 0x14;
      }
      else if (iVar5 == 2) {
        iStack_68 = 6;
      }
      else if (iVar5 < 3) {
LAB_007375ff:
        iStack_68 = 0;
      }
      else if (iVar5 < 5) {
        iStack_68 = 0x10;
      }
      else {
        if (iVar5 != 5) goto LAB_007375ff;
        iStack_68 = 0x12;
      }
      iStack_68 = *(short *)(unaff_EBP + -0x20) + iStack_68;
      iStack_6c = 0x73761d;
      puStack_64 = &stack0xffffffa4;
      FUN_0087b818();
      puStack_64 = (undefined1 *)(unaff_EBP + -0x10);
      iStack_68 = 0x73762a;
      FUN_00434e21();
      iStack_68 = *(undefined4 *)(iVar2 + 0x3d);
      uStack_70 = 0x737633;
      iStack_6c = iVar2 + 0x39;
      FUN_0045f084();
      puStack_64 = (undefined1 *)(unaff_EBP + -0x28);
      iStack_68 = 0x737683;
      puVar3 = (undefined4 *)FUN_00679d22();
      puStack_64 = (undefined1 *)*puVar3;
      iStack_68 = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_6c = 0x737694;
      FUN_00434e21();
      iVar5 = *(int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_00737598:
      if (iVar5 != 0) {
        puStack_64 = (undefined1 *)0x7375a9;
        FUN_00434e38();
      }
    }
    else if (iVar5 == 0x2000) {
      FUN_0087a1b0();
      puStack_64 = (undefined1 *)(iVar2 + 0x79);
      iStack_68 = 0x7374bc;
      uVar4 = FUN_0045f084();
      iStack_68 = *(undefined4 *)(iVar2 + 0x3d);
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      uStack_70 = 0x7374cb;
      iStack_6c = iVar2 + 0x39;
      sVar1 = FUN_0045f084();
      iVar5 = (int)sVar1 / 100;
      if (iVar5 == 0) {
        iStack_68 = 6;
      }
      else if (iVar5 == 1) {
        iStack_68 = 2;
      }
      else if (iVar5 == 2) {
        iStack_68 = 0x12;
      }
      else if (iVar5 < 3) {
LAB_007374f9:
        iStack_68 = 0;
      }
      else if (iVar5 < 5) {
        iStack_68 = 10;
      }
      else {
        if (iVar5 != 5) goto LAB_007374f9;
        iStack_68 = 0xe;
      }
      iStack_68 = *(short *)(unaff_EBP + -0x20) + iStack_68;
      iStack_6c = 0x737517;
      puStack_64 = &stack0xffffffa4;
      FUN_0087b818();
      puStack_64 = (undefined1 *)(unaff_EBP + -0x10);
      iStack_68 = 0x737524;
      FUN_00434e21();
      iStack_68 = *(undefined4 *)(iVar2 + 0x3d);
      uStack_70 = 0x73752d;
      iStack_6c = iVar2 + 0x39;
      FUN_0045f084();
      puStack_64 = (undefined1 *)(unaff_EBP + -0x24);
      iStack_68 = 0x73757d;
      puVar3 = (undefined4 *)FUN_00679d22();
      puStack_64 = (undefined1 *)*puVar3;
      iStack_68 = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_6c = 0x73758e;
      FUN_00434e21();
      iVar5 = *(int *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_00737598;
    }
  }
  puStack_64 = (undefined1 *)0x7376e8;
  FUN_00403191();
  puStack_64 = (undefined1 *)0x0;
  iStack_68 = 0xffffffff;
  iStack_6c = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_70 = 0;
  uStack_74 = 0;
  iStack_78 = 0x7376fd;
  (*DAT_0097b4c8)();
  iStack_78 = 0x73770a;
  FUN_0087a1b0();
  iStack_78 = unaff_EBP + -0x5c;
  uStack_7c = 0xffffffff;
  iStack_84 = 0x73771b;
  puStack_80 = (undefined1 *)&uStack_74;
  iStack_84 = FUN_00449713();
  uStack_88 = 0x737721;
  puStack_80 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_7c;
  iStack_84 = 0x73772e;
  FUN_004033a1();
  iStack_84 = unaff_EBP + -0x28;
  puStack_80 = (undefined1 *)0x18;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_88 = 0x73773d;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_80 = (undefined1 *)0x73774a;
  FUN_0044974c();
  puStack_80 = (undefined1 *)0x737751;
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  iStack_78 = 0x73775c;
  FUN_004497b5();
  iStack_78 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_7c = 0x737769;
  iStack_78 = FUN_00402bc3();
  if (iStack_78 < 0) {
    uStack_7c = 0x737774;
    FUN_00878dfb();
  }
  iStack_78 = 3;
  uStack_7c = 0xff;
  puStack_80 = (undefined1 *)0x737783;
  FUN_004031b7();
  piStack_94 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piStack_94 == (int *)0x0) {
    iStack_78 = 0x80004003;
    uStack_7c = 0x737798;
    FUN_00878dfb();
    piStack_94 = *(int **)(unaff_EBP + -0x14);
  }
  iVar5 = *piStack_94;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x5c);
  puStack_80 = *(undefined1 **)(unaff_EBP + -0x58);
  uStack_8c = 0x47;
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_90 = 8;
  *(int **)(unaff_EBP + -0x28) = piStack_94;
  iStack_78 = *(undefined4 *)(unaff_EBP + -0x50);
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    puStack_9c = *(undefined **)(unaff_EBP + -0x28);
    iStack_a4 = 0x7377cc;
    iStack_a0 = iVar5;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_9c = (undefined *)0x7377d9;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_9c = (undefined *)0x7377e4;
    FUN_00878dfb();
  }
  puStack_9c = (undefined *)0x7377f2;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_9c = (undefined *)0x7377ff;
  FUN_00403191();
  puStack_9c = (undefined *)(unaff_EBP + -0x5c);
  iStack_a4 = unaff_EBP + -0x28;
  iStack_a0 = 0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_a8 = 0x737816;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_a0 = 0x737823;
  iStack_a0 = FUN_00449749();
  iStack_a4 = 0x73782c;
  iStack_a8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_a4;
  iStack_ac = 0x737838;
  FUN_00448a17();
  iStack_a8 = 0x48;
  iStack_ac = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_b0 = (int *)0x737848;
  FUN_004115d9();
  piStack_b0 = (int *)0x73784f;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_9c = (undefined *)0x737864;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_9c = (undefined *)0x73786f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_9c = (undefined *)0x73787c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_9c = (undefined *)0x737887;
    FUN_00878dfb();
  }
  puStack_9c = (undefined *)0x737890;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_9c = (undefined *)0x73789d;
  FUN_00403191();
  puStack_9c = (undefined *)(unaff_EBP + -0x5c);
  iStack_a4 = unaff_EBP + -0x28;
  iStack_a0 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_a8 = 0x7378b4;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_a0 = 0x7378c1;
  iStack_a0 = FUN_00449749();
  iStack_a4 = 0x7378ca;
  iStack_a8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_a4;
  iStack_ac = 0x7378d6;
  FUN_00448a17();
  iStack_a8 = 0x48;
  iStack_ac = *(int *)(unaff_EBP + -0x24) + 0x41;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_b0 = (int *)0x7378eb;
  FUN_004115d9();
  piStack_b0 = (int *)0x7378f2;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    puStack_9c = (undefined *)0x737903;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_9c = (undefined *)0x737910;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_9c = (undefined *)0x73791b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_9c = (undefined *)0x737928;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_9c = (undefined *)0x737933;
    FUN_00878dfb();
  }
  puStack_9c = (undefined *)(unaff_EBP + -0x28);
  iStack_a0 = 0x737947;
  puVar3 = (undefined4 *)FUN_00679d22();
  puStack_9c = (undefined *)*puVar3;
  iStack_a0 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_a4 = 0x737959;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  iVar5 = *(int *)(unaff_EBP + -0x2c);
  puStack_9c = *(undefined **)(iVar5 + 0x8c);
  iStack_a0 = unaff_EBP + -0x2c;
  iStack_a4 = 0x73797c;
  puVar3 = (undefined4 *)FUN_00737ec6();
  puStack_9c = (undefined *)0x737989;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    puStack_9c = (undefined *)0x737996;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  iVar5 = *(int *)(iVar5 + 0x8c);
  if (iVar5 == 0x40) {
    puStack_9c = (undefined *)(iVar2 + 0x41);
  }
  else if (iVar5 == 0x80) {
    puStack_9c = (undefined *)(iVar2 + 0x49);
  }
  else if (iVar5 == 0x100) {
    puStack_9c = (undefined *)(iVar2 + 0x51);
  }
  else {
    if (iVar5 != 0x200) {
      if (iVar5 == 0x800) {
        FUN_0087a1b0();
        *(int ***)(unaff_EBP + -0x2c) = &piStack_94;
        puStack_9c = (undefined *)(iVar2 + 0x69);
        iStack_a0 = 0x737a8e;
        uVar4 = FUN_0045f084();
        iStack_a0 = *(undefined4 *)(iVar2 + 0x3d);
        *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
        iStack_a8 = 0x737a9d;
        iStack_a4 = iVar2 + 0x39;
        sVar1 = FUN_0045f084();
        iVar5 = (int)sVar1 / 100;
        if (iVar5 == 0) {
          iStack_a0 = 0xc;
        }
        else if (iVar5 == 1) {
          iStack_a0 = 0x36;
        }
        else if (iVar5 == 2) {
          iStack_a0 = 10;
        }
        else if (iVar5 < 3) {
LAB_00737acb:
          iStack_a0 = 0;
        }
        else if (iVar5 < 5) {
          iStack_a0 = 0x14;
        }
        else {
          if (iVar5 != 5) goto LAB_00737acb;
          iStack_a0 = 0x2a;
        }
        puStack_9c = *(undefined **)(unaff_EBP + -0x2c);
        iStack_a0 = *(short *)(unaff_EBP + -0x28) - iStack_a0;
        iStack_a4 = 0x737aeb;
        FUN_0087b818();
        puStack_9c = (undefined *)(unaff_EBP + -0x10);
        iStack_a0 = 0x737af8;
        FUN_00434e21();
        iStack_a0 = *(undefined4 *)(iVar2 + 0x3d);
        iStack_a8 = 0x737b01;
        iStack_a4 = iVar2 + 0x39;
        FUN_0045f084();
        puStack_9c = (undefined *)(unaff_EBP + -0x20);
        iStack_a0 = 0x737b4d;
        puVar3 = (undefined4 *)FUN_00679d22();
        puStack_9c = (undefined *)*puVar3;
        iStack_a0 = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_a4 = 0x737b5e;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      else {
        if (iVar5 != 0x2000) goto LAB_00737ba9;
        FUN_0087a1b0();
        *(int ***)(unaff_EBP + -0x28) = &piStack_94;
        puStack_9c = (undefined *)(iVar2 + 0x79);
        iStack_a0 = 0x7379f5;
        uVar4 = FUN_0045f084();
        iStack_a0 = *(undefined4 *)(iVar2 + 0x3d);
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
        iStack_a8 = 0x737a04;
        iStack_a4 = iVar2 + 0x39;
        sVar1 = FUN_0045f084();
        iStack_a8 = (int)sVar1;
        iStack_ac = 0x737a0d;
        iStack_b4 = FUN_00738082();
        iStack_ac = 10;
        piStack_b0 = *(int **)(unaff_EBP + -0x28);
        iStack_b4 = *(short *)(unaff_EBP + -0x2c) - iStack_b4;
        FUN_0087b818();
        puStack_9c = (undefined *)(unaff_EBP + -0x10);
        iStack_a0 = 0x737a2b;
        FUN_00434e21();
        iStack_a0 = *(undefined4 *)(iVar2 + 0x3d);
        iStack_a8 = 0x737a34;
        iStack_a4 = iVar2 + 0x39;
        FUN_0045f084();
        puStack_9c = (undefined *)(unaff_EBP + -0x24);
        iStack_a0 = 0x737a48;
        puVar3 = (undefined4 *)FUN_00679d22();
        uVar4 = *puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_9c = (undefined *)0x737a57;
        FUN_00738082();
        iStack_a0 = unaff_EBP + -0x18;
        iStack_a4 = 0x737a63;
        puStack_9c = (undefined *)uVar4;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      FUN_00414ebb();
      goto LAB_00737ba9;
    }
    puStack_9c = (undefined *)(iVar2 + 0x59);
  }
  iStack_a0 = 0x737b91;
  FUN_0045f084();
  iStack_a0 = unaff_EBP + -0x10;
  puStack_9c = &DAT_0096477c;
  iStack_a4 = 0x737ba6;
  FUN_00434e21();
LAB_00737ba9:
  puStack_9c = (undefined *)0x737bb5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  puStack_9c = (undefined *)(unaff_EBP + -0x3c);
  iStack_a0 = 0x737bc3;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_9c = (undefined *)0x737bd1;
    FUN_00878dfb();
  }
  puStack_9c = (undefined *)0x0;
  iStack_a0 = 0xffffffff;
  iStack_a4 = *(int *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_a8 = 0;
  iStack_ac = 0;
  piStack_b0 = (int *)0x737be4;
  (*DAT_0097b4c8)();
  piStack_b0 = (int *)0x737bf1;
  FUN_0087a1b0();
  piStack_b0 = (int *)(unaff_EBP + -0x3c);
  iStack_b4 = -1;
  FUN_00449713();
  FUN_00456ad5();
  *(int **)(unaff_EBP + -0x28) = &iStack_b4;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_0044974c();
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  piStack_b0 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (piStack_b0 != (int *)0x0) {
    iStack_b4 = 0x737c4c;
    (**(code **)(*piStack_b0 + 8))();
  }
  piStack_b0 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b4 = 0x737c59;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    iStack_b4 = 0x737c64;
    FUN_00878dfb();
  }
  piStack_b0 = (int *)0x3;
  iStack_b4 = 0xff;
  FUN_004031b7();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar6 == (int *)0x0) {
    piStack_b0 = (int *)0x80004003;
    iStack_b4 = 0x737c88;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar6;
  iStack_b4 = *(int *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x2c) = piVar6;
  piStack_b0 = *(int **)(unaff_EBP + -0x50);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_d4 = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_dc = 0x737cbc;
    iStack_d8 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_d4 = 0x737cc9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d4 = 0x737cd4;
    FUN_00878dfb();
  }
  iStack_d4 = 0x737cda;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_d4 = unaff_EBP + -0x4c;
  iStack_d8 = 0x737ce9;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_d4 = 0x737cf5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_d4 = 0x737cff;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_d4 = unaff_EBP + -0x3c;
  iStack_d8 = 0x737d09;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_d4 = 0x737d15;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + -0x3c;
  iStack_dc = unaff_EBP + -0x2c;
  iStack_d8 = 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_d8 = 0x737d39;
  iStack_d8 = FUN_00449749();
  iStack_dc = 0x737d42;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x24) = &iStack_dc;
  FUN_00448a17(uVar4);
  uVar7 = 0x5a;
  uVar4 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004115d9(0x3d,0x5a);
  FUN_00448e3a(uVar4,uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    iStack_d4 = 0x737d76;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_d4 = 0x737d83;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d4 = 0x737d8e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_d4 = 0x737d9b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d4 = 0x737da6;
    FUN_00878dfb();
  }
  iStack_d4 = 0x737dac;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_d4 = unaff_EBP + -0x5c;
  iStack_d8 = 0x737db6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_d4 = 0x737dc2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_d4 = 0x737dcc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_d4 = unaff_EBP + -0x4c;
  iStack_d8 = 0x737dd6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_d4 = 0x737de2;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + -0x4c;
  iStack_dc = unaff_EBP + -0x24;
  iStack_d8 = 0x1a;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d8 = 0x737e06;
  iStack_d8 = FUN_00449749();
  iStack_dc = 0x737e0f;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_dc;
  FUN_00448a17(uVar4);
  uVar4 = 0x5a;
  iVar2 = *(int *)(unaff_EBP + -0x28) + 0x41;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(iVar2,0x5a);
  FUN_00448e3a(iVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_d4 = 0x737e48;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_d4 = 0x737e55;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d4 = 0x737e60;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_d4 = 0x737e6d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d4 = 0x737e78;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_d4 = 0x737e89;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_d4 = 0x737e9a;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


