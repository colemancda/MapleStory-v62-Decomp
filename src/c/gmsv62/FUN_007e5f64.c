/* FUN_007e5f64 - 0x007e5f64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007e5f64(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uStack_8;
  
  FUN_00879bb8();
  pcVar2 = *(char **)(unaff_EBP + 8);
  if (*pcVar2 == '#') {
    cVar1 = pcVar2[1];
    if (cVar1 == 'E') {
      uStack_8 = 2;
      goto LAB_007e6000;
    }
    uStack_8 = 4;
    if (cVar1 == 'I') {
      uStack_8 = 3;
      goto LAB_007e6000;
    }
    if (cVar1 == 'K') {
      uStack_8 = 5;
      goto LAB_007e6000;
    }
    if (cVar1 == 'S') goto LAB_007e6000;
    if (cVar1 == 'w') {
      uStack_8 = 6;
      goto LAB_007e6000;
    }
    if (pcVar2 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(pcVar2 + -4);
    }
    if (2 < iVar3) {
      if (cVar1 == 'B') {
        uStack_8 = 0xc;
      }
      else if (cVar1 == 'F') {
        uStack_8 = 0xb;
      }
      else if (cVar1 == 'L') {
        uStack_8 = 1;
      }
      else if (cVar1 == 'f') {
        uStack_8 = 10;
      }
      else if (cVar1 == 'i') {
        uStack_8 = 7;
      }
      else if (cVar1 == 's') {
        uStack_8 = 9;
      }
      else if (cVar1 == 'v') {
        uStack_8 = 8;
      }
      else {
        uStack_8 = 0xd;
      }
      goto LAB_007e6000;
    }
  }
  uStack_8 = 0;
LAB_007e6000:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uStack_8;
}


