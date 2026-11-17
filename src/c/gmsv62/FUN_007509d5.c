/* FUN_007509d5 - 0x007509d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00750c6f) */

void FUN_007509d5(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *_Str1;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  undefined4 uStack_98;
  int iStack_94;
  
  FUN_00879bb8();
  if (**(int **)(unaff_EBP + 0xc) != 0) {
    FUN_004031b7();
    iVar2 = *(int *)(extraout_ECX + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      FUN_00878dfb();
    }
    piVar1 = (int *)FUN_00425067();
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb();
    }
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x8c))();
    if (iVar2 < 0) {
      uStack_98 = 0x750a65;
      iStack_94 = iVar2;
      FUN_00878e09();
    }
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x454);
    FUN_0045e787();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iStack_94 = 0x750ab0;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_94 = FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff70;
    uStack_98 = 0x750ade;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_94 = 0x750aea;
    FUN_0044974c();
    iStack_94 = 0x750af1;
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_94 = 0x750b32;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_94 = 0x750b46;
    iStack_94 = FUN_00449749();
    uStack_98 = 0x750b4f;
    uVar3 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_98;
    FUN_00448a17(uVar3);
    iVar2 = unaff_EBP + -0x60;
    iVar4 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar4,iVar2);
    FUN_00425067(iVar4,iVar2);
    iVar4 = *(int *)(unaff_EBP + 8) + 0xe;
    iVar2 = *(int *)(extraout_ECX + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar2 = (iVar2 - *(int *)(unaff_EBP + -0x1c)) / 2;
    FUN_004115d9(iVar2,iVar4);
    FUN_00448e3a(iVar2,iVar4);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x1f;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    uVar6 = 1;
    while ((iVar2 = **(int **)(unaff_EBP + 0xc), iVar2 != 0 && (uVar6 < *(uint *)(iVar2 + -4)))) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar2 = *(int *)(iVar2 + -4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (uVar6 == iVar2 - 4U) {
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   *(IBinding **)(extraout_ECX + 0x454));
      }
      else {
        iStack_94 = 0x750c2d;
        puVar5 = (undefined4 *)FUN_00756efd();
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   (IBinding *)*puVar5);
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
      }
      _Str1 = *(char **)(uVar6 * 4 + **(int **)(unaff_EBP + 0xc));
      if (_Str1 == (char *)0x0) {
        _Str1 = DAT_00980dfc;
      }
      iStack_94 = 0x750c80;
      iVar2 = _strcmp(_Str1,&DAT_00978474);
      if (iVar2 == 0) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 8;
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) =
             *(undefined4 *)(uVar6 * 4 + **(int **)(unaff_EBP + 0xc));
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        iStack_94 = 0x750cab;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffff70;
        iStack_94 = *(undefined4 *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uStack_98 = 0x750ccd;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_94 = 0x750cd9;
        FUN_0044974c();
        iStack_94 = 0x750ce0;
        uVar3 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
        iStack_94 = 0x750d0b;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
        iStack_94 = 0x750d2b;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_94 = 0x750d47;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_94 = 0x750d5b;
        iStack_94 = FUN_00449749();
        *(undefined4 **)(unaff_EBP + -0x30) = &uStack_98;
        FUN_00448a17(*(undefined4 *)(unaff_EBP + -0x18));
        iVar2 = unaff_EBP + -0x70;
        iVar4 = unaff_EBP + -0x2c;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00424e27(iVar4,iVar2);
        FUN_00425067(iVar4,iVar2);
        uVar3 = *(undefined4 *)(unaff_EBP + 8);
        iVar2 = (*(int *)(extraout_ECX + 0xc) - *(int *)(unaff_EBP + -0x28)) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_004115d9(iVar2,uVar3);
        FUN_00448e3a(iVar2,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x12;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      uVar6 = *(uint *)(unaff_EBP + -0x1c);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


