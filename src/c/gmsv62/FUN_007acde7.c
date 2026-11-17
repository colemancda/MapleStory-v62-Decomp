/* FUN_007acde7 - 0x007acde7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007acde7(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 0) || (*(int *)(unaff_EBP + 0xc) < 1)) {
LAB_007ace50:
    iVar3 = FUN_007d1e08();
    uVar6 = DAT_00978138;
    iVar2 = extraout_ECX[0x7a5];
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
    if ((iVar2 == 0) &&
       ((extraout_ECX[0x7a9] == 0 ||
        (extraout_ECX[0x7aa] == iVar3 || extraout_ECX[0x7aa] - iVar3 < 0)))) {
      uVar1 = -(uint)(extraout_ECX[0x35d] != 0) & extraout_ECX[0x35d] - 0xcU;
      *(uint *)(unaff_EBP + -0x1c) = uVar1;
      if ((*(int *)(unaff_EBP + 0x18) != 0) || (*(int *)(uVar1 + 0x110) != 0)) {
        if (*(int *)(unaff_EBP + 0x14) == 0) {
          iStack_44 = 0x7acfb5;
          iVar2 = FUN_005265f8();
          iStack_44 = 0x7acfca;
          iVar3 = FUN_005265f8();
          iVar7 = (uint)(iVar2 != 0) - (uint)(iVar3 != 0);
          iStack_44 = 0x7acfdd;
          iVar2 = FUN_005265f8();
          iStack_44 = 0x7acff2;
          iVar3 = FUN_005265f8();
          iVar3 = (uint)(iVar2 != 0) - (uint)(iVar3 != 0);
          iStack_44 = 0x7ad003;
          iStack_44 = FUN_006509a1();
          iStack_44 = iStack_44 + 0x19c;
          iStack_48 = 0x7ad014;
          uVar6 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + 0x18) = uVar6;
          iStack_44 = (**(code **)(*extraout_ECX + 4))();
          iStack_44 = iStack_44 + 0x7b0;
          iStack_48 = 0x7ad031;
          iVar2 = FUN_00413367();
          if (iVar2 != 0) {
            iVar7 = -iVar7;
            iVar3 = -iVar3;
          }
          puVar4 = (undefined4 *)(**(code **)(extraout_ECX[1] + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x24) = *puVar4;
          iVar2 = puVar4[1];
          *(int *)(unaff_EBP + -0x20) = iVar2;
          if (iVar7 == 0) {
            if (iVar3 != 0) {
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
              *(undefined4 *)(unaff_EBP + -4) = 1;
              if (iVar3 < 0) {
                iStack_44 = unaff_EBP + 0x10;
                iStack_48 = *(int *)(unaff_EBP + 0x18) * iVar3 + iVar2;
                iStack_4c = *(int *)(unaff_EBP + -0x24);
                uStack_50 = 0x7ad0f7;
                FUN_00861327();
                iStack_44 = 0x7ad100;
                FUN_007b4259();
                iVar2 = *(int *)(unaff_EBP + -0x20);
                if (*(int *)(unaff_EBP + 0x10) != iVar2) {
                  uVar6 = *(undefined4 *)(unaff_EBP + -0x24);
                  *(int *)(unaff_EBP + 0x18) = iVar2 + -1;
                  iVar3 = extraout_ECX[1];
                  *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
                  (**(code **)(iVar3 + 0x18))();
                  iStack_44 = unaff_EBP + 0x18;
                  iStack_48 = unaff_EBP + -0x14;
                  iStack_4c = *(int *)(unaff_EBP + 0x10) + -1;
                  uStack_50 = uVar6;
                  iVar3 = FUN_0086156f();
                  if (iVar3 != 0) {
                    *(int *)(unaff_EBP + 0x10) = iVar2;
                  }
                }
              }
              else {
                if (iVar3 < 1) goto LAB_007ad2fa;
                iStack_44 = 0x7ad158;
                piVar5 = (int *)FUN_00486ada();
                iVar2 = *piVar5;
                if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
                  iStack_44 = 0x7ad170;
                  (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
                }
                iVar2 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0xcU) + 0x110);
                *(int *)(unaff_EBP + -0x30) = iVar2;
                if (iVar2 != 0) {
                  iStack_44 = 0x7ad187;
                  InterlockedIncrement((LONG *)(iVar2 + 4));
                }
                iStack_44 = unaff_EBP + 0x10;
                iVar2 = *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + 0x18) * iVar3;
                iStack_4c = *(int *)(unaff_EBP + -0x24);
                *(undefined1 *)(unaff_EBP + -4) = 2;
                uStack_50 = 0x7ad1ab;
                iStack_48 = iVar2;
                FUN_0086123f();
                iStack_44 = 0x7ad1b4;
                FUN_007b4259();
                if ((*(int *)(unaff_EBP + -0x28) == 0) ||
                   (*(int *)(unaff_EBP + -0x28) == *(int *)(unaff_EBP + -0x30))) {
                  iStack_44 = unaff_EBP + 0x10;
                  iStack_4c = *(int *)(unaff_EBP + -0x24);
                  uStack_50 = 0x7ad1d3;
                  iStack_48 = iVar2;
                  FUN_00861327();
                  iStack_44 = 0x7ad1dc;
                  FUN_007b4259();
                }
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + -0x30) != 0) {
                  iStack_44 = 0x7ad1f0;
                  FUN_004cd642();
                }
              }
              if (*(int *)(unaff_EBP + -0x28) != 0) {
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                iVar2 = *(int *)(unaff_EBP + 0x10) + -1;
                iStack_44 = 0x7ad20e;
                FUN_004cd642();
                goto LAB_007ad20e;
              }
            }
          }
          else {
            *(int *)(unaff_EBP + -0x24) =
                 *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + 0x18) * iVar7;
            iStack_44 = unaff_EBP + 0x10;
            iStack_4c = *(undefined4 *)(unaff_EBP + -0x24);
            uStack_50 = 0x7ad070;
            iStack_48 = iVar2;
            iVar2 = FUN_00861327();
            iVar3 = *(int *)(unaff_EBP + -0x20);
            iStack_44 = unaff_EBP + 0x18;
            iStack_4c = *(undefined4 *)(unaff_EBP + -0x24);
            uStack_50 = 0x7ad089;
            iStack_48 = iVar3;
            iVar7 = FUN_0086123f();
            if (iVar2 == 0) {
              if (iVar7 == 0) goto LAB_007ad2fa;
              iVar2 = *(int *)(unaff_EBP + 0x18);
            }
            else if (iVar7 == 0) {
              iVar2 = *(int *)(unaff_EBP + 0x10);
            }
            else {
              iVar2 = *(int *)(unaff_EBP + 0x18);
              if (*(int *)(unaff_EBP + 0x10) - iVar3 <= iVar3 - iVar2) {
                iVar2 = *(int *)(unaff_EBP + 0x10) + -1;
                goto LAB_007ad20e;
              }
            }
            iVar2 = iVar2 + -1;
LAB_007ad20e:
            iStack_44 = 0;
            iStack_48 = 0;
            iStack_4c = 0xffffffff;
            uStack_50 = 0;
            iVar3 = FUN_007bd07c(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar3 != 0) {
              iStack_44 = 0;
              iStack_48 = 6;
              iStack_4c = *(undefined4 *)(unaff_EBP + 0xc);
              uStack_50 = *(undefined4 *)(unaff_EBP + 8);
              FUN_00790b31();
              goto LAB_007ad243;
            }
          }
        }
        else {
          iStack_44 = 0x7acebf;
          iVar2 = FUN_00621789();
          *(int *)(unaff_EBP + 0xc) = iVar2;
          if (iVar2 != 0) {
            iStack_4c = *(undefined4 *)(iVar2 + 0xc);
            iStack_44 = 0;
            iVar2 = *(int *)(iVar2 + 0x10) + -10;
            *(int *)(unaff_EBP + -0x24) = iStack_4c;
            uStack_50 = 0x7acee6;
            iStack_48 = iVar2;
            iVar3 = FUN_00861327();
            if (iVar3 != 0) {
              if (*(int *)(unaff_EBP + 0x10) != 0) {
                iStack_44 = 0;
                iStack_48 = 0x5d;
                iStack_4c = 0x7acf03;
                FUN_0060142b();
                *(undefined4 *)(unaff_EBP + -4) = 0;
                iVar3 = FUN_00429303();
                *(undefined1 *)(unaff_EBP + 8) = *(undefined1 *)(iVar3 + 0xf8);
                iStack_44 = 0x7acf1f;
                FUN_00457cda();
                *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffc0;
                iStack_44 = -1;
                iStack_48 = *(undefined4 *)(unaff_EBP + 0x10);
                iStack_4c = 0x7acf31;
                FUN_00414edd();
                iStack_44 = 0x7acf39;
                FUN_00459cb5();
                (**(code **)(extraout_ECX[1] + 0x10))();
                iStack_44 = 0x7acf4e;
                FUN_0045d247();
                (**(code **)(extraout_ECX[1] + 0x10))();
                iStack_44 = 0x7acf64;
                FUN_0045d247();
                iStack_44 = 0x7acf76;
                FUN_0045d247();
                iStack_44 = 0x7acf88;
                FUN_0045d247();
                iStack_44 = 0x7acf97;
                FUN_004751b2();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_0045ebca();
              }
LAB_007ad243:
              iVar3 = *(int *)(unaff_EBP + 0x14);
              *(int **)(unaff_EBP + 8) = &iStack_44;
              iStack_48 = 0;
              extraout_ECX[0x7a5] = 1;
              extraout_ECX[0x7a6] = (uint)(iVar3 != 0);
              extraout_ECX[0x7a7] = *(int *)(unaff_EBP + -0x24);
              iVar3 = *(int *)(unaff_EBP + -0x18);
              extraout_ECX[0x7a9] = iVar3;
              extraout_ECX[0x7a8] = iVar2;
              extraout_ECX[0x7aa] = iVar3 + 0x78;
              iStack_4c = 0x7ad28d;
              FUN_00424e0a();
              iStack_48 = 0;
              iStack_4c = 0;
              *(undefined4 **)(unaff_EBP + 0x14) = &uStack_50;
              *(undefined4 *)(unaff_EBP + -4) = 3;
              FUN_00486ada(&uStack_50);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              FUN_00679d86(unaff_EBP + 0xc,0x866);
              uVar8 = 0;
              *(undefined1 *)(unaff_EBP + -4) = 6;
              uVar6 = FUN_00411641(0);
              FUN_00424e82(uVar6);
              FUN_0042b613(uVar6,uVar8);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_00402676();
              iStack_44 = 0x7ad2ea;
              FUN_004e98b7();
              iStack_44 = 1;
              iStack_48 = 0x7ad2f5;
              FUN_007959eb();
              uVar6 = 1;
              goto LAB_007ad2fc;
            }
          }
        }
      }
    }
  }
  else {
    uVar1 = FUN_0045e4b8();
    if ((uVar1 & 1) == 0) {
      iVar2 = FUN_00429303();
      uVar1 = *(uint *)(iVar2 + 0x108) >> 1 & 1;
      *(uint *)(unaff_EBP + -0x1c) = uVar1;
      if (uVar1 == 0) goto LAB_007ace32;
    }
    else {
LAB_007ace32:
      iVar2 = FUN_007b3bb4();
      if (iVar2 == 0) {
        iVar2 = FUN_007a3f46();
        if (iVar2 == 0) goto LAB_007ace50;
      }
    }
  }
LAB_007ad2fa:
  uVar6 = 0;
LAB_007ad2fc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


