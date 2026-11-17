/* FUN_00621f69 - 0x00621f69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x006221fa) */

void FUN_00621f69(void)

{
  IBinding *pIVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x30);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar6 = extraout_ECX;
  if (iVar4 != 0) {
    iStack_48 = 0x621f94;
    cVar3 = FUN_00433bfa();
    if (cVar3 == '\0') {
      if (*(int *)(extraout_ECX + 0x34) == 0) {
        iStack_48 = 0x621faa;
        FUN_00878dfb();
      }
      iVar4 = FUN_00432a57();
      if (iVar4 == 0) {
        iStack_48 = 0x621fc1;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x34),
                   (IBinding *)0x0);
        iStack_48 = 0x621fcc;
        FUN_006211f0();
        iStack_48 = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_4c = 0x621fdc;
        iStack_50 = FUN_00449713();
        *(int **)(unaff_EBP + -0x1c) = &iStack_4c;
        puStack_54 = (undefined1 *)0x621fe8;
        FUN_00448a17();
        iStack_50 = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_54 = (undefined1 *)0x621ff7;
        FUN_0040263d();
        puStack_54 = (undefined1 *)0x621ffe;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_4c = 0x622009;
        uVar5 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iStack_48 = 0x622018;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          iStack_48 = 0x62202b;
          FUN_00878dfb();
        }
        iVar4 = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_48 = 0x622037;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_48 = 0x622042;
          FUN_00878dfb();
          iVar4 = extraout_ECX_00;
        }
        iStack_48 = 0;
        puStack_54 = (undefined1 *)&iStack_4c;
        *(int **)(unaff_EBP + -0x1c) = &iStack_4c;
        iStack_50 = 0x10e0;
        uStack_58 = 0x62205a;
        iStack_4c = iVar4;
        FUN_00679e4e();
        iStack_50 = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_54 = (undefined1 *)0x622069;
        FUN_0040263d();
        puStack_54 = (undefined1 *)0x622070;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_4c = 0x62207b;
        uVar5 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iStack_48 = 0x62208a;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          iStack_48 = 0x622098;
          FUN_00878dfb();
        }
        iVar4 = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_48 = 0x6220a4;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_48 = 0x6220af;
          FUN_00878dfb();
          iVar4 = extraout_ECX_01;
        }
        iStack_48 = 0xff;
        iStack_4c = -0x3ffbe088;
        *(int **)(unaff_EBP + -0x1c) = &iStack_50;
        puStack_54 = (undefined1 *)0x0;
        uStack_58 = 0x6220c6;
        iStack_50 = iVar4;
        FUN_00424e0a();
        iVar4 = *(int *)(extraout_ECX + 0x30);
        puStack_54 = *(undefined1 **)(iVar4 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uStack_58 = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
        uStack_60 = 0;
        uStack_64 = 0x6220df;
        FUN_00424dd7();
        uStack_60 = 0;
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_64;
        FUN_00424dbc(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puVar7 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x18);
        pIVar1 = (IBinding *)*puVar7;
        *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) =
             (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x38);
        iStack_48 = 0x62210b;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x38),pIVar1);
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          iStack_48 = 0x622118;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        iStack_48 = 0x622124;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        iStack_48 = unaff_EBP + -0x40;
        iStack_4c = 0x622133;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          iStack_48 = 0x62213f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_48 = 0x622149;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
        iStack_48 = unaff_EBP + -0x30;
        iStack_4c = 0x622153;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          iStack_48 = 0x62215f;
          FUN_00878dfb();
        }
        piVar2 = *(int **)(unaff_EBP + -0x1c);
        iVar4 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar4 == 0) {
          iStack_48 = 0x622174;
          FUN_00878dfb();
        }
        piVar2 = (int *)*piVar2;
        iStack_50 = *(int *)(unaff_EBP + -0x40);
        iStack_4c = *(int *)(unaff_EBP + -0x3c);
        iVar4 = *piVar2;
        iStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
        uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
        uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
        uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
        uStack_64 = 0x20;
        *(int **)(unaff_EBP + -0x1c) = piVar2;
        puStack_54 = *(undefined1 **)(unaff_EBP + -0x24);
        iVar4 = (**(code **)(iVar4 + 0x110))(piVar2);
        if (iVar4 < 0) {
          iStack_48 = *(undefined4 *)(unaff_EBP + -0x1c);
          iStack_50 = 0x6221ae;
          iStack_4c = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_48 = 0x6221bb;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_48 = 0x6221c6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_48 = 0x6221d2;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_48 = 0x6221dd;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          iStack_48 = 0x6221ee;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
    }
  }
  if ((*(int *)(iVar6 + 0x3c) != 0) && (iVar4 = FUN_00432a57(), iVar4 == 0)) {
    iStack_48 = 0x622217;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar6 + 0x3c),(IBinding *)0x0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


