/* FUN_0080f468 - 0x0080f468 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080f468(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = unaff_EBP + -0x34;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  uStack_64 = 0x80f48b;
  FUN_004245d2();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0081266e();
  iVar5 = *(int *)(extraout_ECX + 0xa8);
  *(int *)(unaff_EBP + -0x14) = iVar5;
  *(int *)(extraout_ECX + 0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  while( true ) {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (iVar4 == 1) {
      uVar1 = 4;
    }
    else if (iVar4 == 2) {
      uVar1 = 8;
    }
    else if (iVar4 == 3) {
      uVar1 = 0x10;
    }
    else if (iVar4 == 4) {
      uVar1 = 0x20;
    }
    else if (iVar4 == 5) {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0;
    }
    if ((uVar1 & *(uint *)(unaff_EBP + -0x34)) == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar4 = 0;
      while ((iVar5 != 0 && (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar5 + -4)))) {
        if (*(int *)(iVar4 + iVar5) / 1000000 == *(int *)(unaff_EBP + -0x10)) {
          iStack_60 = 0xffffffff;
          uStack_64 = 0x80f526;
          FUN_008126aa();
          iStack_60 = 0x80f52d;
          FUN_0081262c();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        iVar4 = iVar4 + 0x1c;
        iVar5 = *(int *)(unaff_EBP + -0x14);
      }
    }
    else {
      uVar1 = FUN_0042452b();
      iVar5 = 0;
      *(uint *)(unaff_EBP + -0x18) = uVar1 & 0xff;
      if ((uVar1 & 0xff) != 0) {
        do {
          FUN_0080f6e4();
          iStack_60 = unaff_EBP + -0x3c;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_64 = 0x80f568;
          iVar4 = FUN_004b57d7();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_0052e11f();
          FUN_0046575e();
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar4 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_0046575e();
          uVar2 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x58) = uVar2;
          uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x40) + 0x18))();
          *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
          iStack_60 = unaff_EBP + -0x28;
          *(int *)(unaff_EBP + -0x50) = iVar5;
          uStack_64 = 0x80f5bf;
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
          iStack_60 = 0x80f613;
          FUN_00402e8e();
          iStack_60 = 0x80f61f;
          FUN_00402f41();
          FUN_00402fa6();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            iStack_60 = 0x80f63b;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            iStack_60 = 0x80f650;
            FUN_00434e38();
          }
          iStack_60 = 1;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x58);
          iStack_68 = unaff_EBP + -0x2c;
          uStack_6c = 0x80f666;
          puVar3 = (undefined4 *)FUN_005536ce();
          iStack_60 = 0x80f670;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x48),
                     (IBinding *)*puVar3);
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            iStack_60 = 0x80f67d;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          }
          iStack_60 = 0xffffffff;
          uStack_64 = 0x80f691;
          FUN_008126aa();
          iStack_60 = 0x80f698;
          FUN_0081262c();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_0080f6f2();
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(unaff_EBP + -0x18));
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    if (5 < *(int *)(unaff_EBP + -0x10)) break;
    iVar5 = *(int *)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xc4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0081266e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


