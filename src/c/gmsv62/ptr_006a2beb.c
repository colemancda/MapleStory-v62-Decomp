/* ptr_006a2beb - 0x006a2beb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a2beb(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  char *pcVar1;
  undefined1 *puVar2;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  if (*(char *)(unaff_EBP + 0xb) != (char)unaff_EBX) goto LAB_006a2ca8;
  if (*(int *)(unaff_ESI + 0x68) == unaff_EBX) {
    *(int *)(unaff_ESI + 100) = unaff_EDI;
    *(undefined4 *)(unaff_ESI + 0x68) = 1;
    if (*(int *)(unaff_ESI + 0x14) != unaff_EBX) {
      FUN_00815de9();
    }
  }
  if (unaff_EDI == 1) {
    if (unaff_EBX < *(int *)(unaff_ESI + 0xb0)) {
      puVar2 = &stack0xfffffffc;
      *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffffc;
      FUN_0048b998(&stack0xfffffffc);
      FUN_0045b90e(puVar2);
      goto LAB_006a2c75;
    }
  }
  else {
    if (unaff_EDI == 0x3e9) {
      *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffffc;
      pcVar1 = s___GIVEUP___0096a6a0;
    }
    else {
      if (unaff_EDI != 0x3ea) goto LAB_006a2c7c;
      *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffffc;
      pcVar1 = &DAT_00978474;
    }
    FUN_00414edd(pcVar1,0xffffffff);
LAB_006a2c75:
    FUN_006a3023();
  }
LAB_006a2c7c:
  if (DAT_0097bcf0 != unaff_EBX) {
    FUN_00815de9();
    if (DAT_0097bcf0 != unaff_EBX) {
      (*(code *)**(undefined4 **)(DAT_0097bcf0 + 8))();
    }
  }
  *(int *)(DAT_00978368 + 0x3298) = unaff_EBX;
LAB_006a2ca8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


