/* FUN_006d5c28 - 0x006d5c28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d5c28(void)

{
  int iVar1;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar2;
  int unaff_EBP;
  undefined4 uVar3;
  char *pcStack_2c;
  char *pcStack_28;
  
  FUN_00879bb8();
  iVar1 = *(int *)(DAT_00978368 + 0x2098);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    pcStack_2c = (char *)0x0;
  }
  else {
    pcStack_2c = (char *)(iVar1 + 4);
  }
  pcStack_28 = (char *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd();
  pcStack_2c = *(char **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcVar2 = extraout_ECX;
  if ((pcStack_2c == (char *)0x0) || (*pcStack_2c == '\0')) {
LAB_006d5cf4:
    *(char ***)(unaff_EBP + -0x14) = &pcStack_2c;
    uVar3 = 0x313;
    pcStack_2c = pcVar2;
  }
  else {
    pcStack_28 = *(char **)(unaff_EBP + 8);
    iVar1 = (*DAT_0097b4bc)();
    pcVar2 = extraout_ECX_00;
    if (iVar1 == 0) goto LAB_006d5cf4;
    pcStack_2c = (char *)(unaff_EBP + 8);
    pcStack_28 = (char *)0x0;
    iVar1 = FUN_007d1e11();
    if (iVar1 != 0) {
      pcStack_28 = (char *)0x0;
      pcStack_2c = (char *)0x0;
      FUN_0060142b(0x6e);
      pcStack_28 = (char *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      pcStack_2c = (char *)0x6d5cbe;
      FUN_00457cda();
      pcStack_2c = (char *)(unaff_EBP + 8);
      *(char ***)(unaff_EBP + -0x14) = &pcStack_28;
      pcStack_28 = (char *)0x0;
      FUN_00414f8b();
      pcStack_2c = (char *)0x6d5cd7;
      FUN_00459cb5();
      pcStack_28 = (char *)(unaff_EBP + -0x24);
      pcStack_2c = (char *)0x6d5ce6;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      pcStack_28 = (char *)0x6d5cf2;
      FUN_0045ebca();
      goto LAB_006d5d12;
    }
    pcStack_2c = pcStack_28;
    *(char ***)(unaff_EBP + -0x14) = &pcStack_2c;
    uVar3 = 0x314;
  }
  pcStack_28 = (char *)0xffffffff;
  FUN_00679d86(&pcStack_2c,uVar3);
  FUN_006d2ea2();
LAB_006d5d12:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pcStack_28 = (char *)0x6d5d1d;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_28 = (char *)0x6d5d28;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


