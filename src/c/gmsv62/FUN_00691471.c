/* FUN_00691471 - 0x00691471 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00691471(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(int *)(unaff_EBP + 8) = *(int *)(*(int *)(extraout_ECX + 0xac) + 0x3c) + 1;
  }
  iStack_48 = 0x6914a9;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(unaff_EBP + -0x30) = iVar2;
  FUN_0045e4a2();
  FUN_006934f1();
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(int *)(unaff_EBP + -0x18) = iVar2 + 0x3e3 + *(int *)(unaff_EBP + 8) * 4;
  iVar2 = extraout_ECX;
  while( true ) {
    if (**(int **)(unaff_EBP + -0x18) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(**(int **)(unaff_EBP + -0x18) + -4);
    }
    if (iVar3 + -1 < *(int *)(unaff_EBP + -0x10)) break;
    iStack_4c = unaff_EBP + -0x40;
    iStack_48 = *(undefined4 *)(unaff_EBP + 8);
    iStack_50 = 0x6914fe;
    iVar2 = FUN_00458c4f();
    piVar1 = *(int **)(iVar2 + 4);
    FUN_0046575e();
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
      FUN_0045e2eb();
      iStack_48 = 0x69152c;
      iVar2 = FUN_0055443a();
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
        FUN_0045e2eb();
        iStack_48 = 0x69154c;
        iVar2 = FUN_0055416a();
        if (iVar2 == 0) {
          *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
          FUN_0045e2eb();
          iStack_48 = 0x69156c;
          iVar2 = FUN_005540b6();
          if ((iVar2 == 0) && (piVar1[6] == 0 && piVar1[7] == 0)) {
            *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
            FUN_0045e2eb();
            iStack_48 = 0x691598;
            iVar2 = FUN_005542d2();
            if (iVar2 == 0) {
              iStack_48 = 0x6915aa;
              puVar4 = (undefined4 *)FUN_0069352d();
              uVar5 = FUN_0045e2eb();
              *puVar4 = uVar5;
              puVar4[2] = *(undefined4 *)(unaff_EBP + -0x10);
              uVar5 = (**(code **)(*piVar1 + 0x18))();
              puVar4[1] = uVar5;
              iStack_48 = 0x6915cf;
              FUN_00609b69();
              iStack_48 = unaff_EBP + -0x24;
              iStack_4c = 0x6915e0;
              puVar6 = (undefined4 *)FUN_0045a1d8();
              iStack_50 = *puVar6;
              iStack_48 = 0;
              iStack_4c = 0xffffffff;
              uStack_54 = 0;
              uStack_58 = 0;
              *(undefined4 *)(unaff_EBP + -4) = 0;
              (*DAT_0097b4c8)();
              FUN_0087a1b0();
              puVar6 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x20,*puVar4);
              uVar5 = *puVar6;
              *(undefined1 *)(unaff_EBP + -4) = 1;
              (*DAT_0097b4c8)(0,0,uVar5,0xffffffff,&uStack_58,0x3fffffff);
              iStack_48 = 0x691632;
              FUN_00402e8e();
              FUN_00408b49();
              FUN_00402fa6();
              iVar2 = *(int *)(unaff_EBP + -0x14);
              puVar4[3] = iVar2;
              if (iVar2 != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              FUN_00414ebb();
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_00414ebb();
              iStack_48 = 1;
              iStack_4c = *puVar4;
              iStack_50 = unaff_EBP + -0x28;
              uStack_54 = 0x691680;
              puVar6 = (undefined4 *)FUN_005536ce();
              iStack_48 = 0x69168a;
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar4 + 4),
                         (IBinding *)*puVar6);
              if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
                iStack_48 = 0x691697;
                (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
              }
            }
          }
        }
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    iVar2 = *(int *)(unaff_EBP + -0x2c);
  }
  *(undefined4 *)(iVar2 + 0xec) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


