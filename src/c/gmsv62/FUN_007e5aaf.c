/* FUN_007e5aaf - 0x007e5aaf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e5aaf(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_EBP;
  bool bVar3;
  char *pcVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007e59f9(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x10,1);
  pcVar4 = *(char **)(unaff_EBP + -0x10);
  cVar1 = *pcVar4;
  if (cVar1 < 'd') {
    if (cVar1 != 'c') {
      if (cVar1 == '#') goto LAB_007e5b95;
      if ((cVar1 != 'B') && (cVar1 != 'F')) {
        if (cVar1 < 'L') goto LAB_007e5b25;
        if (('M' < cVar1) && (cVar1 != '_')) {
          bVar3 = cVar1 == 'a';
          goto LAB_007e5b23;
        }
      }
    }
  }
  else if (cVar1 < 'r') {
    if ((cVar1 < 'o') && (cVar1 != 'f')) {
      if (cVar1 < 'h') {
LAB_007e5b25:
        if (pcVar4 == (char *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(pcVar4 + -4);
        }
        FUN_0045efbb(pcVar4,uVar2);
        goto LAB_007e5b95;
      }
      if ('i' < cVar1) {
        bVar3 = cVar1 == 'm';
LAB_007e5b23:
        if (!bVar3) goto LAB_007e5b25;
      }
    }
  }
  else if ((cVar1 < 's') || (('v' < cVar1 && ((cVar1 < 'x' || ('z' < cVar1)))))) goto LAB_007e5b25;
  if (pcVar4 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pcVar4 + -4);
  }
  while( true ) {
    FUN_0045efbb(pcVar4,uVar2);
    FUN_007e59f9(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x10,1);
    pcVar4 = *(char **)(unaff_EBP + -0x10);
    if ((((pcVar4 == (char *)0x0) || (cVar1 = *pcVar4, cVar1 == '\0')) || (cVar1 == '\r')) ||
       ((cVar1 == '#' || (cVar1 == '\\')))) break;
    uVar2 = *(undefined4 *)(pcVar4 + -4);
  }
LAB_007e5b95:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


