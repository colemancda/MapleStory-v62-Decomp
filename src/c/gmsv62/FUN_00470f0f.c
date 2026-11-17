/* FUN_00470f0f - 0x00470f0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00470f0f(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iStack_1c = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_20 = 0x470f31;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_1c = 0x470f3a;
  iVar2 = (*DAT_0097b704)();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  if (0xaef < (uint)(iVar2 - extraout_ECX[1])) {
    if (*(char *)(DAT_00978368 + 0x2058) == '\0') {
      iStack_1c = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_20 = 0x470f97;
      FUN_00414f8b();
      iStack_1c = 1;
      iStack_20 = 0;
      uStack_24 = 1;
      uStack_28 = 0x400;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_2c = 0x470fad;
      uStack_24 = FUN_00415015();
      uStack_28 = 0x470fb3;
      iVar2 = FUN_00471777();
      iStack_1c = -1;
      iStack_20 = 0x470fc2;
      FUN_004150c0();
      if (iVar2 == 0) {
        *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
        uVar4 = 0x11d;
        uStack_2c = extraout_ECX_00;
LAB_00470fd5:
        iStack_1c = 0;
        iStack_20 = 0;
        uStack_24 = 0;
        uStack_28 = 0;
        FUN_00679d22(&uStack_2c,uVar4);
        FUN_007db3ad();
        uVar4 = 0;
      }
      else {
        if (30000 < (uint)(*(int *)(unaff_EBP + -0x18) - *extraout_ECX)) {
          *extraout_ECX = *(int *)(unaff_EBP + -0x18);
          iStack_1c = 0x471008;
          FUN_0045f10c();
        }
        iStack_1c = *(int *)(unaff_EBP + 8);
        piVar1 = extraout_ECX + 3;
        iStack_20 = 0xffffffff;
        uStack_24 = 0x471017;
        FUN_004655d4();
        iStack_20 = 0x47101e;
        FUN_00414f8b();
        while ((iStack_1c = *piVar1, iStack_1c != 0 && (4 < *(uint *)(iStack_1c + -4)))) {
          iStack_20 = 0x471032;
          FUN_00472621();
        }
        if (*piVar1 != 0) {
          if (*(int *)(*piVar1 + -4) == 4) {
            *(undefined4 *)(unaff_EBP + 8) = 4;
            do {
              iStack_1c = *(int *)(unaff_EBP + 8) + *piVar1;
              iStack_20 = 0x471052;
              iVar2 = FUN_0045ec92();
              if (iVar2 == 0) goto LAB_0047107d;
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
            } while (*(int *)(unaff_EBP + 8) < 0x10);
            iStack_1c = 0x471066;
            iVar2 = (*DAT_0097b704)();
            extraout_ECX[1] = iVar2;
            *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
            uVar4 = 0x36a;
            uStack_2c = extraout_ECX_01;
            goto LAB_00470fd5;
          }
        }
LAB_0047107d:
        iVar2 = *(int *)(unaff_EBP + -0x18);
        extraout_ECX[extraout_ECX[8] + 4] = iVar2;
        iVar3 = (extraout_ECX[8] + 1) % 4;
        extraout_ECX[8] = iVar3;
        if ((uint)(iVar2 - extraout_ECX[iVar3 + 4]) < 2000) {
          iStack_1c = 0x4710a6;
          iVar2 = (*DAT_0097b704)();
          extraout_ECX[1] = iVar2;
          *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
          uVar4 = 0x36b;
          uStack_2c = extraout_ECX_02;
          goto LAB_00470fd5;
        }
        iStack_20 = unaff_EBP + -0x14;
        *(int **)(unaff_EBP + 8) = &iStack_1c;
        iStack_1c = 0;
        uStack_24 = 0x4710ce;
        FUN_00414f8b();
        iStack_20 = 0x4710d5;
        FUN_0047114e();
        uVar4 = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_1c = 0x4710e3;
      FUN_00414ebb();
      goto LAB_004710e3;
    }
    iStack_1c = 0x36c;
    iStack_20 = unaff_EBP + 8;
    uStack_24 = 0x470f6e;
    iStack_20 = FUN_00679d22();
    iStack_1c = 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_24 = 0x470f7a;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_1c = 0x470f87;
    FUN_00414ebb();
  }
  uVar4 = 0;
LAB_004710e3:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_1c = 0x4710ef;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


