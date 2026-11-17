/* FUN_007e5bb0 - 0x007e5bb0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e5bb0(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while( true ) {
    FUN_007e59f9(uVar2,unaff_EBP + -0x10,0);
    pcVar3 = *(char **)(unaff_EBP + -0x10);
    if ((((pcVar3 == (char *)0x0) || (cVar1 = *pcVar3, cVar1 == '\0')) || (cVar1 == '\r')) ||
       ((cVar1 == '#' || (cVar1 == '\\')))) break;
    FUN_0045efbb(pcVar3,*(undefined4 *)(pcVar3 + -4));
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    uVar4 = FUN_0045e053(unaff_EBP + 8,uVar4,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


