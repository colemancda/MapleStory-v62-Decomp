/* FUN_00690416 - 0x00690416 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00690416(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  uVar2 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xf0) = uVar2 & 0xff;
  iStack_64 = unaff_EBP + -0x38;
  uStack_68 = 0x69044a;
  FUN_004245d2();
  if ((*(uint *)(unaff_EBP + -0x38) & 2) != 0) {
    uVar3 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0xf4) = uVar3;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006934f1();
  iVar6 = *(int *)(extraout_ECX + 0xcc);
  *(int *)(unaff_EBP + -0x14) = iVar6;
  *(int *)(extraout_ECX + 0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  iVar4 = extraout_ECX;
  do {
    iVar1 = *(int *)(unaff_EBP + -0x10);
    if (iVar1 == 1) {
      uVar2 = 4;
    }
    else if (iVar1 == 2) {
      uVar2 = 8;
    }
    else if (iVar1 == 3) {
      uVar2 = 0x10;
    }
    else if (iVar1 == 4) {
      uVar2 = 0x20;
    }
    else if (iVar1 == 5) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0;
    }
    if ((uVar2 & *(uint *)(unaff_EBP + -0x38)) == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while ((iVar6 != 0 && (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar6 + -4)))) {
        if (*(int *)(*(int *)(unaff_EBP + -0x1c) + iVar6) / 1000000 == *(int *)(unaff_EBP + -0x10))
        {
          iStack_64 = 0xffffffff;
          uStack_68 = 0x6904f8;
          FUN_0069352d();
          iStack_64 = 0x6904ff;
          FUN_006934af();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1c;
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
    }
    else {
      uVar2 = FUN_0042452b();
      iVar6 = 0;
      *(uint *)(unaff_EBP + -0x1c) = uVar2 & 0xff;
      if ((uVar2 & 0xff) != 0) {
        do {
          FUN_006906ba();
          iStack_64 = unaff_EBP + -0x40;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_68 = 0x69053b;
          iVar4 = FUN_004b57d7();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_0052e11f();
          FUN_0046575e();
          *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar4 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_0046575e();
          uVar3 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
          uVar3 = (**(code **)(**(int **)(unaff_EBP + -0x44) + 0x18))();
          *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
          iStack_64 = unaff_EBP + -0x2c;
          *(int *)(unaff_EBP + -0x54) = iVar6;
          uStack_68 = 0x690592;
          puVar5 = (undefined4 *)FUN_0045a1d8();
          iStack_6c = *puVar5;
          iStack_64 = 0;
          uStack_68 = 0xffffffff;
          uStack_70 = 0;
          uStack_74 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          puVar5 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + -0x5c));
          uVar3 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          (*DAT_0097b4c8)(0,0,uVar3,0xffffffff,&uStack_74,0x3fffffff);
          iStack_64 = 0x6905e6;
          FUN_00402e8e();
          iStack_64 = 0x6905f2;
          FUN_00402f41();
          FUN_00402fa6();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            iStack_64 = 0x69060e;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x2c) != 0) {
            iStack_64 = 0x690623;
            FUN_00434e38();
          }
          iStack_64 = 1;
          uStack_68 = *(undefined4 *)(unaff_EBP + -0x5c);
          iStack_6c = unaff_EBP + -0x30;
          uStack_70 = 0x690639;
          puVar5 = (undefined4 *)FUN_005536ce();
          iStack_64 = 0x690643;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x4c),
                     (IBinding *)*puVar5);
          if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
            iStack_64 = 0x690650;
            (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
          }
          iStack_64 = 0xffffffff;
          uStack_68 = 0x690664;
          FUN_0069352d();
          iStack_64 = 0x69066b;
          FUN_006934af();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_006906c8();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(unaff_EBP + -0x1c));
        iVar4 = *(int *)(unaff_EBP + -0x24);
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 6);
  *(undefined4 *)(iVar4 + 0xe8) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006934f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


