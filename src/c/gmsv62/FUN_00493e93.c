/* FUN_00493e93 - 0x00493e93 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00493e93(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 in_stack_ffffff80;
  undefined4 in_stack_ffffff84;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || (DAT_00978368 == 0)) || (DAT_00973a94 == 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_54 = 0x494201;
    FUN_0045e46f();
LAB_00494201:
    uVar4 = 0;
    goto LAB_00494203;
  }
  uStack_54 = 0x493ed5;
  iVar2 = FUN_0045e2eb();
  if ((iVar2 / 10000 == 0x38f) || (iVar2 / 10000 == 0x21f)) {
LAB_00493f4b:
    iVar2 = *(int *)(unaff_EBP + 0xc);
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 0xc);
    if ((*(int *)(iVar2 + 0xc) < 80000000) || (89999999 < *(int *)(iVar2 + 0xc))) {
      uStack_54 = 0x493f09;
      iVar2 = FUN_0045e2eb();
      if (iVar2 / 10000 != 0x38e) {
        uStack_54 = 0x493f24;
        uStack_54 = FUN_0045e2eb();
        iStack_58 = 0x493f2c;
        iVar2 = FUN_005540b6();
        if (iVar2 == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + 0xc) != 0) {
            uStack_54 = 0;
            iStack_58 = 0x493f46;
            FUN_0045e794();
          }
          goto LAB_00494201;
        }
      }
      goto LAB_00493f4b;
    }
  }
  iVar2 = *(int *)(iVar2 + 0x48);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    piVar1 = (int *)(DAT_00978368 + 0x327c);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while ((iVar2 = *piVar1, iVar2 != 0 && (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(iVar2 + -4))))
    {
      piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + iVar2);
      if (piVar3 != (int *)0x0) {
        uStack_54 = 0x493f8a;
        iVar2 = FUN_0045e2eb();
        if (iVar2 == *piVar3) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          do {
            piVar3 = piVar3 + 1;
            if (*piVar3 == 0) break;
            if (*piVar3 == *(int *)(*(int *)(unaff_EBP + 0xc) + 0xc)) {
              iVar2 = *piVar1;
              *(undefined4 *)(unaff_EBP + -0x24) = 1;
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + iVar2;
              break;
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          } while (*(int *)(unaff_EBP + -0x18) < 10);
          if (*(int *)(unaff_EBP + -0x24) != 0) break;
        }
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x68;
    }
  }
  uStack_54 = 0x493fde;
  iVar2 = FUN_0045e2eb();
  if (iVar2 / 10000 == 0x38e) {
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_58 = 1;
    iStack_5c = 10000;
    iStack_60 = 10000;
    *(int **)(unaff_EBP + -0x24) = &iStack_60;
    FUN_0045e0ed(unaff_EBP + 8);
    iVar2 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = (**(code **)(iVar2 + 0x30))();
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))
                      (iVar2 + 0x14 + *(int *)(unaff_EBP + 0x14));
    FUN_00753933(iVar2 + 0x14 + *(int *)(unaff_EBP + 0x10));
  }
  else {
    uStack_54 = 0x494045;
    iVar2 = FUN_0045e2eb();
    if (iVar2 / 10000 == 0x21f) {
      uStack_54 = *(undefined4 *)(*(int *)(extraout_ECX + 0x210) + 0x490);
      iStack_60 = unaff_EBP + 8;
      iStack_58 = 10000;
      iStack_5c = 10000;
      *(int **)(unaff_EBP + -0x24) = &iStack_5c;
      FUN_0045e0ed();
    }
    else {
      uStack_54 = 0x49407c;
      iVar2 = FUN_0045e2eb();
      if ((iVar2 / 10000 != 0x38f) && (iVar2 / 10000 != 0x21f)) {
        uStack_54 = 0x4940ed;
        uStack_54 = FUN_0045e2eb();
        iStack_58 = unaff_EBP + -0x20;
        iStack_5c = 0x4940f9;
        FUN_00554ef3();
        uStack_54 = 0;
        iStack_58 = unaff_EBP + -0x24;
        iStack_5c = 2;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_60 = 0x494111;
        iStack_60 = FUN_0045e2eb();
        iVar2 = FUN_0044da62();
        if ((iVar2 == 0) || (*(int *)(unaff_EBP + -0x24) != 0xc)) {
          uStack_54 = 0x49416c;
          FUN_00489d8c();
          *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + 0xc);
          uStack_54 = 0;
          iStack_58 = *(int *)(unaff_EBP + -0x14);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 100);
          iStack_5c = unaff_EBP + -0x50;
          iStack_60 = *(int *)(unaff_EBP + -0x1c);
          iVar2 = *(int *)(extraout_ECX + 4);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          *(undefined4 *)(unaff_EBP + -0x44) = 1;
          iVar2 = (**(code **)(iVar2 + 0x30))();
          iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))
                            (iVar2 + 0x14 + *(int *)(unaff_EBP + 0x14));
          FUN_00759767(iVar2 + 0x14 + *(int *)(unaff_EBP + 0x10),in_stack_ffffff84);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00489db7();
        }
        else {
          uStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
          iVar2 = *(int *)(unaff_EBP + 0xc);
          iStack_58 = *(int *)(iVar2 + 0x20);
          iStack_5c = *(int *)(iVar2 + 100);
          iStack_60 = *(int *)(iVar2 + 0x28);
          iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))
                            (*(undefined4 *)(unaff_EBP + -0x1c));
          iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))
                            (iVar2 + 0x14 + *(int *)(unaff_EBP + 0x14));
          FUN_0074e221(iVar2 + 0x14 + *(int *)(unaff_EBP + 0x10),in_stack_ffffff80,in_stack_ffffff84
                      );
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00449913(0);
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        goto LAB_004941dc;
      }
      uStack_54 = *(undefined4 *)(*(int *)(extraout_ECX + 0x210) + 0x48c);
      iStack_60 = unaff_EBP + 8;
      *(int **)(unaff_EBP + -0x24) = &iStack_5c;
      iStack_5c = extraout_ECX_00;
      iStack_58 = extraout_ECX_00;
      FUN_0045e0ed();
    }
    iVar2 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_60 = 0x4940b5;
    iVar2 = (**(code **)(iVar2 + 0x30))();
    iStack_60 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0x14);
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
    FUN_007557b2(iVar2 + 0x14 + *(int *)(unaff_EBP + 0x10));
  }
LAB_004941dc:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0045e794(0);
  }
  uVar4 = 1;
LAB_00494203:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


