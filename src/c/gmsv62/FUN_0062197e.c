/* FUN_0062197e - 0x0062197e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0062197e(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int *piVar8;
  int unaff_EBP;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar4 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((iVar4 == 0) || (*(int *)(iVar4 + 8) == 10)) || (*(int *)(iVar4 + 8) == 0xb)) {
    iVar7 = *(int *)(extraout_ECX + 0x30);
    if (iVar7 != iVar4) {
      *(int *)(extraout_ECX + 0x30) = iVar4;
      if (iVar7 != 0) {
        if (*(int *)(iVar7 + 8) == 10) {
          piStack_50 = (int *)0x6219dc;
          piVar2 = (int *)FUN_006211f0();
          *(undefined4 *)(unaff_EBP + -0x10) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else {
          piStack_50 = (int *)0x6219f4;
          piVar2 = (int *)FUN_00621483();
          *(undefined4 *)(unaff_EBP + -0x10) = 2;
          *(undefined4 *)(unaff_EBP + -4) = 2;
        }
        piVar2 = (int *)*piVar2;
        *(int **)(unaff_EBP + -0x14) = piVar2;
        if (piVar2 != (int *)0x0) {
          piStack_50 = (int *)0x621a0c;
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            piStack_50 = (int *)0x621a2a;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 4;
        if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
          if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
            piStack_50 = (int *)0x621a48;
            (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
          }
        }
        piStack_50 = (int *)0x0;
        iStack_54 = 0x621a52;
        iStack_58 = FUN_00449713();
        *(int **)(unaff_EBP + -0x24) = &iStack_54;
        puStack_5c = (undefined1 *)0x621a5e;
        FUN_00448a17();
        iStack_58 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puStack_5c = (undefined1 *)0x621a6e;
        FUN_0040263d();
        puStack_5c = (undefined1 *)0x621a75;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_54 = 0x621a80;
        uVar3 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
        piStack_50 = (int *)0x621a8f;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          piStack_50 = (int *)0x621aa0;
          FUN_00878dfb();
        }
        iVar4 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_50 = (int *)0x621aad;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_50 = (int *)0x621ab8;
          FUN_00878dfb();
          iVar4 = extraout_ECX_00;
        }
        piStack_50 = (int *)0x0;
        puStack_5c = (undefined1 *)&iStack_54;
        *(int **)(unaff_EBP + -0x24) = &iStack_54;
        iStack_58 = 0x10e1;
        uStack_60 = 0x621ad0;
        iStack_54 = iVar4;
        FUN_00679e4e();
        iStack_58 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puStack_5c = (undefined1 *)0x621ae0;
        FUN_0040263d();
        puStack_5c = (undefined1 *)0x621ae7;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_54 = 0x621af2;
        uVar3 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
        piStack_50 = (int *)0x621b01;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          piStack_50 = (int *)0x621b12;
          FUN_00878dfb();
        }
        iVar4 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_50 = (int *)0x621b1f;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_50 = (int *)0x621b2a;
          FUN_00878dfb();
          iVar4 = extraout_ECX_01;
        }
        piStack_50 = (int *)0xff;
        iStack_54 = -0x3ffbe088;
        *(int **)(unaff_EBP + -0x24) = &iStack_58;
        puStack_5c = (undefined1 *)0x0;
        uStack_60 = 0x621b41;
        iStack_58 = iVar4;
        FUN_00424e0a();
        puStack_5c = *(undefined1 **)(iVar7 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uStack_60 = *(undefined4 *)(iVar7 + 0xc);
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_64;
        uStack_68 = 0;
        uStack_6c = 0x621b57;
        FUN_00424dd7();
        uStack_68 = 0;
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_6c;
        FUN_00424dbc(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puVar6 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x20);
        this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3c);
        piStack_50 = (int *)0x621b83;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar6);
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          piStack_50 = (int *)0x621b90;
          (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
        }
        piStack_50 = (int *)0x621b9a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        piStack_50 = (int *)(unaff_EBP + -0x48);
        iStack_54 = 0x621ba8;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621bb4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_50 = (int *)0x621bc2;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        piStack_50 = (int *)(unaff_EBP + -0x38);
        iStack_54 = 0x621bd0;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621bdc;
          FUN_00878dfb();
        }
        iVar4 = *(int *)this;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar4 == 0) {
          piStack_50 = (int *)0x621bee;
          FUN_00878dfb();
        }
        piVar2 = *(int **)this;
        iStack_58 = *(int *)(unaff_EBP + -0x48);
        iStack_54 = *(int *)(unaff_EBP + -0x44);
        piStack_50 = *(int **)(unaff_EBP + -0x40);
        iVar4 = *piVar2;
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
        uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
        uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
        puStack_5c = *(undefined1 **)(unaff_EBP + -0x2c);
        uStack_6c = 0;
        *(int **)(unaff_EBP + -0x20) = piVar2;
        iVar4 = (**(code **)(iVar4 + 0x110))(piVar2);
        if (iVar4 < 0) {
          piStack_50 = *(int **)(unaff_EBP + -0x20);
          iStack_58 = 0x621c29;
          iStack_54 = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_50 = (int *)0x621c36;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621c41;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_50 = (int *)0x621c4e;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621c59;
          FUN_00878dfb();
        }
        piStack_50 = (int *)0x621c62;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x38),
                   (IBinding *)0x0);
        piStack_50 = (int *)0x621c6b;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x34),
                   (IBinding *)0x0);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          piStack_50 = (int *)0x621c7c;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
      }
      if (*(int *)(extraout_ECX + 0x30) != 0) {
        piStack_50 = (int *)0x621c90;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x38),
                   (IBinding *)0x0);
        if (*(int *)(*(int *)(extraout_ECX + 0x30) + 8) == 10) {
          piStack_50 = (int *)0x621ca4;
          piVar2 = (int *)FUN_006211f0();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
        }
        else {
          piStack_50 = (int *)0x621cb9;
          piVar2 = (int *)FUN_00621483();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
          *(undefined4 *)(unaff_EBP + -4) = 0xe;
        }
        piVar2 = (int *)*piVar2;
        *(int **)(unaff_EBP + -0x14) = piVar2;
        if (piVar2 != (int *)0x0) {
          piStack_50 = (int *)0x621cd3;
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0x11;
        if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
          if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
            piStack_50 = (int *)0x621cf1;
            (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        if (((*(byte *)(unaff_EBP + -0x10) & 4) != 0) &&
           (*(int **)(unaff_EBP + -0x1c) != (int *)0x0)) {
          piStack_50 = (int *)0x621d0b;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        piStack_50 = (int *)0x0;
        iStack_54 = 0x621d18;
        iStack_58 = FUN_00449713();
        *(int **)(unaff_EBP + -0x28) = &iStack_54;
        puStack_5c = (undefined1 *)0x621d24;
        FUN_00448a17();
        iStack_58 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_5c = (undefined1 *)0x621d34;
        FUN_0040263d();
        puStack_5c = (undefined1 *)0x621d3b;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_54 = 0x621d46;
        uVar3 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
        piStack_50 = (int *)0x621d55;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          piStack_50 = (int *)0x621d66;
          FUN_00878dfb();
        }
        iVar4 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_50 = (int *)0x621d73;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          piStack_50 = (int *)0x621d7e;
          FUN_00878dfb();
          iVar4 = extraout_ECX_02;
        }
        piStack_50 = (int *)0x0;
        puStack_5c = (undefined1 *)&iStack_54;
        *(int **)(unaff_EBP + -0x28) = &iStack_54;
        iStack_58 = 0x10df;
        uStack_60 = 0x621d96;
        iStack_54 = iVar4;
        FUN_00679e4e();
        iStack_58 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_5c = (undefined1 *)0x621da6;
        FUN_0040263d();
        puStack_5c = (undefined1 *)0x621dad;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_54 = 0x621db8;
        uVar3 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
        piStack_50 = (int *)0x621dc7;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          piStack_50 = (int *)0x621dd8;
          FUN_00878dfb();
        }
        iVar4 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_50 = (int *)0x621de5;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          piStack_50 = (int *)0x621df0;
          FUN_00878dfb();
          iVar4 = extraout_ECX_03;
        }
        piStack_50 = (int *)0xff;
        iStack_54 = -0x3ffbe088;
        *(int **)(unaff_EBP + -0x28) = &iStack_58;
        puStack_5c = (undefined1 *)0x0;
        uStack_60 = 0x621e07;
        iStack_58 = iVar4;
        FUN_00424e0a();
        iVar4 = *(int *)(extraout_ECX + 0x30);
        puStack_5c = *(undefined1 **)(iVar4 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uStack_60 = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_64;
        uStack_68 = 0;
        uStack_6c = 0x621e20;
        FUN_00424dd7();
        uStack_68 = 0;
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_6c;
        FUN_00424dbc(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piVar2 = (int *)FUN_0042e5bf(unaff_EBP + -0x18);
        piVar2 = (int *)*piVar2;
        piVar1 = *(int **)(extraout_ECX + 0x34);
        piVar8 = (int *)(extraout_ECX + 0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (piVar1 != piVar2) {
          *piVar8 = (int)piVar2;
          FUN_00424ed4();
          if (piVar1 != (int *)0x0) {
            piStack_50 = (int *)0x621e63;
            (**(code **)(*piVar1 + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_50 = (int *)0x621e74;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        piStack_50 = (int *)0x621e80;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        piStack_50 = (int *)(unaff_EBP + -0x38);
        iStack_54 = 0x621e8f;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621e9b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_50 = (int *)0x621ea5;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        piStack_50 = (int *)(unaff_EBP + -0x48);
        iStack_54 = 0x621eaf;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621ebb;
          FUN_00878dfb();
        }
        iVar4 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (iVar4 == 0) {
          piStack_50 = (int *)0x621ece;
          FUN_00878dfb();
        }
        piVar8 = (int *)*piVar8;
        iStack_58 = *(int *)(unaff_EBP + -0x38);
        iStack_54 = *(int *)(unaff_EBP + -0x34);
        piStack_50 = *(int **)(unaff_EBP + -0x30);
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
        uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
        uStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
        uStack_6c = 0;
        puStack_5c = *(undefined1 **)(unaff_EBP + -0x3c);
        iVar4 = (**(code **)(*piVar8 + 0x110))(piVar8);
        if (iVar4 < 0) {
          iStack_58 = 0x621f03;
          iStack_54 = iVar4;
          piStack_50 = piVar8;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_50 = (int *)0x621f10;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621f1b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_50 = (int *)0x621f28;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_50 = (int *)0x621f33;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          piStack_50 = (int *)0x621f44;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) == 0) goto LAB_00621f58;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  piStack_50 = (int *)0x621f58;
  FUN_006222b3();
LAB_00621f58:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


