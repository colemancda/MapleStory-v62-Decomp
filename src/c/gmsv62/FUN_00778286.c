/* FUN_00778286 - 0x00778286 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00778286(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  char *pcVar5;
  char *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar6;
  char *pcStack_3c;
  undefined4 uStack_38;
  char acStack_34 [4];
  int iStack_30;
  char *pcStack_2c;
  
  FUN_00879bb8();
  iVar2 = DAT_00978368;
  iVar3 = *(int *)(DAT_00978368 + 0x2cac);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(int *)(unaff_EBP + -0x20) = iVar2;
  if (((iVar3 == 0) || (**(int **)(iVar2 + 0x2cb8) != *(int *)(iVar2 + 0x2088))) ||
     (iVar3 = *(int *)(extraout_ECX + 0x74), *(int *)(unaff_EBP + -0x14) = iVar3, iVar3 == 0))
  goto LAB_00778514;
  pcStack_2c = (char *)0x69c;
  iStack_30 = 0x7782e0;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    pcStack_2c = (char *)0x7782f1;
    iVar3 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar4 != 0) & uVar4 - 8;
  pcStack_2c = (char *)0x778318;
  FUN_004c26c4();
  pcStack_2c = (char *)0x0;
  iStack_30 = 1;
  pcStack_3c = acStack_34;
  *(char **)(unaff_EBP + -0x1c) = acStack_34;
  uStack_38 = 0xc99;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22();
  uStack_38 = 0;
  pcStack_3c = (char *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677();
  FUN_007eddac();
  uStack_38 = 4;
  if ((*(int *)(unaff_EBP + -0x14) == 4) || (*(int *)(unaff_EBP + -0x14) == 5)) {
    uStack_38 = 0;
  }
  pcStack_2c = (char *)0x0;
  iStack_30 = 0;
  acStack_34[0] = '\n';
  acStack_34[1] = '\0';
  acStack_34[2] = '\0';
  acStack_34[3] = '\0';
  pcStack_3c = &DAT_00978474;
  FUN_007edfe1();
  pcStack_2c = (char *)0x778378;
  FUN_007e6e3c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcStack_2c = (char *)0x778387;
  iVar3 = FUN_004bc6a2();
  if (iVar3 == 1) {
    pcStack_2c = (char *)(unaff_EBP + -0x1c);
    iStack_30 = 0x77839b;
    FUN_00641b6c();
    pcStack_2c = (char *)0x0;
    iStack_30 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    acStack_34[0] = -0x58;
    acStack_34[1] = -0x7d;
    acStack_34[2] = 'w';
    acStack_34[3] = '\0';
    FUN_0045ed72();
    iStack_30 = 0x7783af;
    pcStack_2c = (char *)FUN_0045ee27();
    iStack_30 = 0x7783b8;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    pcStack_2c = (char *)0x7783c4;
    FUN_00414ebb();
    if ((*(int *)(unaff_EBP + -0x14) == 4) || (*(int *)(unaff_EBP + -0x14) == 5)) {
      pcVar5 = *(char **)(unaff_EBP + -0x10);
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        iStack_30 = unaff_EBP + -0x10;
        pcStack_2c = (char *)0x1;
        acStack_34[0] = '\r';
        acStack_34[1] = -0x7c;
        acStack_34[2] = 'w';
        acStack_34[3] = '\0';
        iVar3 = FUN_007d1e11();
        if (iVar3 == 0) {
          *(char ***)(unaff_EBP + -0x1c) = &pcStack_3c;
          pcStack_3c = pcStack_2c;
          goto LAB_007783ee;
        }
        pcVar5 = *(char **)(unaff_EBP + -0x10);
      }
      if ((*(int *)(unaff_EBP + -0x14) != 4) ||
         ((((pcVar5 != (char *)0x0 && (*pcVar5 != '\0')) ||
           (pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x18) + 0xa0), pcVar1 == (char *)0x0)) ||
          (*pcVar1 == '\0')))) {
        if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
          pcStack_2c = *(char **)(unaff_EBP + -0x14);
          iStack_30 = 0x778465;
          iVar3 = FUN_00856a42();
          if (iVar3 != 0) {
            *(char ***)(unaff_EBP + -0x1c) = &pcStack_3c;
            uVar6 = 0xc9b;
            pcStack_3c = extraout_ECX_00;
            goto LAB_00778478;
          }
        }
LAB_0077848a:
        iVar3 = *(int *)(unaff_EBP + -0x18);
        pcStack_2c = (char *)(unaff_EBP + -0x10);
        iStack_30 = 0x7784a0;
        FUN_00414f8b();
        if ((((*(int *)(unaff_EBP + -0x14) == 5) &&
             ((pcVar5 = *(char **)(iVar3 + 0x9c), pcVar5 == (char *)0x0 || (*pcVar5 == '\0')))) &&
            (pcVar5 = *(char **)(*(int *)(unaff_EBP + -0x18) + 0xa0), pcVar5 != (char *)0x0)) &&
           (*pcVar5 != '\0')) {
          pcStack_2c = (char *)0xc75;
          iStack_30 = unaff_EBP + -0x20;
          builtin_strncpy(acStack_34,"ۄw",4);
          pcStack_2c = (char *)FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_30 = 0x7784e7;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          pcStack_2c = (char *)0x7784f3;
          FUN_00414ebb();
        }
        pcStack_2c = (char *)0x0;
        iStack_30 = 0x7784fc;
        FUN_008161f1();
        goto LAB_007784fc;
      }
      *(char ***)(unaff_EBP + -0x1c) = &pcStack_3c;
      uVar6 = 0xc9a;
      pcStack_3c = pcVar5;
    }
    else {
      iStack_30 = unaff_EBP + -0x10;
      pcStack_2c = (char *)0x1;
      builtin_strncpy(acStack_34,"ڃw",4);
      iVar3 = FUN_007d1e11();
      if (iVar3 != 0) goto LAB_0077848a;
      pcStack_3c = pcStack_2c;
      *(char ***)(unaff_EBP + -0x1c) = &pcStack_3c;
LAB_007783ee:
      uVar6 = 0x325;
    }
LAB_00778478:
    pcStack_2c = (char *)0x0;
    iStack_30 = 0;
    acStack_34[0] = '\0';
    acStack_34[1] = '\0';
    acStack_34[2] = '\0';
    acStack_34[3] = '\0';
    uStack_38 = 0;
    FUN_00679d22(&pcStack_3c,uVar6);
    FUN_007db3ad();
  }
LAB_007784fc:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_2c = (char *)0x778508;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_2c = (char *)0x778514;
  FUN_004c26e1();
LAB_00778514:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


