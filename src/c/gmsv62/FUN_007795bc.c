/* FUN_007795bc - 0x007795bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007795bc(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  char *pcVar4;
  char *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  char *pcStack_3c;
  undefined4 uStack_38;
  char acStack_34 [4];
  int iStack_30;
  char *pcStack_2c;
  
  FUN_00879bb8();
  uVar5 = DAT_00978368;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  pcStack_2c = (char *)0x7795df;
  iVar2 = FUN_008582fe();
  if ((iVar2 == 0) ||
     (iVar2 = *(int *)(extraout_ECX + 0x74), *(int *)(unaff_EBP + -0x14) = iVar2, iVar2 == 0))
  goto LAB_0077983a;
  pcStack_2c = (char *)0x69c;
  iStack_30 = 0x779606;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    pcStack_2c = (char *)0x779617;
    iVar2 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar3 != 0) & uVar3 - 8;
  pcStack_2c = (char *)0x77963e;
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
  pcStack_2c = (char *)0x77969e;
  FUN_007e6e3c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcStack_2c = (char *)0x7796ad;
  iVar2 = FUN_004bc6a2();
  if (iVar2 == 1) {
    pcStack_2c = (char *)(unaff_EBP + -0x1c);
    iStack_30 = 0x7796c1;
    FUN_00641b6c();
    pcStack_2c = (char *)0x0;
    iStack_30 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    builtin_strncpy(acStack_34,"Ζw",4);
    FUN_0045ed72();
    iStack_30 = 0x7796d5;
    pcStack_2c = (char *)FUN_0045ee27();
    iStack_30 = 0x7796de;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    pcStack_2c = (char *)0x7796ea;
    FUN_00414ebb();
    if ((*(int *)(unaff_EBP + -0x14) == 4) || (*(int *)(unaff_EBP + -0x14) == 5)) {
      pcVar4 = *(char **)(unaff_EBP + -0x10);
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        iStack_30 = unaff_EBP + -0x10;
        pcStack_2c = (char *)0x1;
        acStack_34[0] = '3';
        acStack_34[1] = -0x69;
        acStack_34[2] = 'w';
        acStack_34[3] = '\0';
        iVar2 = FUN_007d1e11();
        if (iVar2 == 0) {
          *(char ***)(unaff_EBP + -0x20) = &pcStack_3c;
          pcStack_3c = pcStack_2c;
          goto LAB_00779714;
        }
        pcVar4 = *(char **)(unaff_EBP + -0x10);
      }
      if ((*(int *)(unaff_EBP + -0x14) != 4) ||
         ((((pcVar4 != (char *)0x0 && (*pcVar4 != '\0')) ||
           (pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x18) + 0xa0), pcVar1 == (char *)0x0)) ||
          (*pcVar1 == '\0')))) {
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          pcStack_2c = *(char **)(unaff_EBP + -0x14);
          iStack_30 = 0x77978b;
          iVar2 = FUN_00858415();
          if (iVar2 != 0) {
            *(char ***)(unaff_EBP + -0x20) = &pcStack_3c;
            uVar5 = 0x1127;
            pcStack_3c = extraout_ECX_00;
            goto LAB_0077979e;
          }
        }
LAB_007797b0:
        iVar2 = *(int *)(unaff_EBP + -0x18);
        pcStack_2c = (char *)(unaff_EBP + -0x10);
        iStack_30 = 0x7797c6;
        FUN_00414f8b();
        if ((((*(int *)(unaff_EBP + -0x14) == 5) &&
             ((pcVar4 = *(char **)(iVar2 + 0x9c), pcVar4 == (char *)0x0 || (*pcVar4 == '\0')))) &&
            (pcVar4 = *(char **)(*(int *)(unaff_EBP + -0x18) + 0xa0), pcVar4 != (char *)0x0)) &&
           (*pcVar4 != '\0')) {
          pcStack_2c = (char *)0xc75;
          iStack_30 = unaff_EBP + -0x1c;
          acStack_34[0] = '\x01';
          acStack_34[1] = -0x68;
          acStack_34[2] = 'w';
          acStack_34[3] = '\0';
          pcStack_2c = (char *)FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_30 = 0x77980d;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          pcStack_2c = (char *)0x779819;
          FUN_00414ebb();
        }
        pcStack_2c = (char *)0x0;
        iStack_30 = 0x779822;
        FUN_008161f1();
        goto LAB_00779822;
      }
      *(char ***)(unaff_EBP + -0x20) = &pcStack_3c;
      uVar5 = 0xc9a;
      pcStack_3c = pcVar4;
    }
    else {
      iStack_30 = unaff_EBP + -0x10;
      pcStack_2c = (char *)0x1;
      acStack_34[0] = '\0';
      acStack_34[1] = -0x69;
      acStack_34[2] = 'w';
      acStack_34[3] = '\0';
      iVar2 = FUN_007d1e11();
      if (iVar2 != 0) goto LAB_007797b0;
      pcStack_3c = pcStack_2c;
      *(char ***)(unaff_EBP + -0x20) = &pcStack_3c;
LAB_00779714:
      uVar5 = 0x325;
    }
LAB_0077979e:
    pcStack_2c = (char *)0x0;
    iStack_30 = 0;
    acStack_34[0] = '\0';
    acStack_34[1] = '\0';
    acStack_34[2] = '\0';
    acStack_34[3] = '\0';
    uStack_38 = 0;
    FUN_00679d22(&pcStack_3c,uVar5);
    FUN_007db3ad();
  }
LAB_00779822:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_2c = (char *)0x77982e;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_2c = (char *)0x77983a;
  FUN_004c26e1();
LAB_0077983a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


