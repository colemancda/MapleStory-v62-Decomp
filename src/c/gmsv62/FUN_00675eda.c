/* FUN_00675eda - 0x00675eda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00675eda(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  uVar1 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xac) = uVar1 & 0xff;
  iStack_60 = unaff_EBP + -0x34;
  uStack_64 = 0x675f0b;
  FUN_004245d2();
  if ((*(uint *)(unaff_EBP + -0x34) & 2) != 0) {
    uVar2 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0xb0) = uVar2;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piVar4 = (int *)(extraout_ECX + 0x9c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x20) = piVar4;
  FUN_006779b3();
  iVar6 = *piVar4;
  *(int *)(unaff_EBP + -0x14) = iVar6;
  *piVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  while( true ) {
    iVar5 = *(int *)(unaff_EBP + -0x10);
    if (iVar5 == 1) {
      uVar1 = 4;
    }
    else if (iVar5 == 2) {
      uVar1 = 8;
    }
    else if (iVar5 == 3) {
      uVar1 = 0x10;
    }
    else if (iVar5 == 4) {
      uVar1 = 0x20;
    }
    else if (iVar5 == 5) {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0;
    }
    if ((uVar1 & *(uint *)(unaff_EBP + -0x34)) == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar5 = 0;
      while ((iVar6 != 0 && (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar6 + -4)))) {
        if (*(int *)(iVar5 + iVar6) / 1000000 == *(int *)(unaff_EBP + -0x10)) {
          iStack_60 = 0xffffffff;
          uStack_64 = 0x675fbb;
          FUN_006779ef();
          iStack_60 = 0x675fc2;
          FUN_00677971();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        iVar5 = iVar5 + 0x1c;
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
    }
    else {
      uVar1 = FUN_0042452b();
      iVar6 = 0;
      *(uint *)(unaff_EBP + -0x18) = uVar1 & 0xff;
      if ((uVar1 & 0xff) != 0) {
        do {
          FUN_00676169();
          iStack_60 = unaff_EBP + -0x3c;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_64 = 0x675ffd;
          iVar5 = FUN_004b57d7();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_0052e11f();
          FUN_0046575e();
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar5 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_0046575e();
          uVar2 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x58) = uVar2;
          uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x40) + 0x18))();
          *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
          iStack_60 = unaff_EBP + -0x28;
          *(int *)(unaff_EBP + -0x50) = iVar6;
          uStack_64 = 0x676054;
          puVar3 = (undefined4 *)FUN_0045a1d8();
          iStack_68 = *puVar3;
          iStack_60 = 0;
          uStack_64 = 0xffffffff;
          uStack_6c = 0;
          uStack_70 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          puVar3 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + -0x58));
          uVar2 = *puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          (*DAT_0097b4c8)(0,0,uVar2,0xffffffff,&uStack_70,0x3fffffff);
          iStack_60 = 0x6760a8;
          FUN_00402e8e();
          iStack_60 = 0x6760b4;
          FUN_00402f41();
          FUN_00402fa6();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            iStack_60 = 0x6760d0;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            iStack_60 = 0x6760e5;
            FUN_00434e38();
          }
          iStack_60 = 1;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x58);
          iStack_68 = unaff_EBP + -0x2c;
          uStack_6c = 0x6760fb;
          puVar3 = (undefined4 *)FUN_005536ce();
          iStack_60 = 0x676105;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x48),
                     (IBinding *)*puVar3);
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            iStack_60 = 0x676112;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          }
          iStack_60 = 0xffffffff;
          uStack_64 = 0x676120;
          FUN_006779ef();
          iStack_60 = 0x676127;
          FUN_00677971();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00676177();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(unaff_EBP + -0x18));
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    if (5 < *(int *)(unaff_EBP + -0x10)) break;
    iVar6 = *(int *)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006779b3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


