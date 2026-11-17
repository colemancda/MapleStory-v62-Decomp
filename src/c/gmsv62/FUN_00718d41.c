/* FUN_00718d41 - 0x00718d41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00718d41(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = 0;
    while( true ) {
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar2 + -4);
      }
      if (iVar1 <= iVar3) break;
      if (*(char *)(iVar3 + iVar2) != ' ') {
        *(char *)(unaff_EBP + -0xd) = *(char *)(iVar3 + iVar2);
        FUN_0045efbb(unaff_EBP + -0xd,1);
        iVar2 = *(int *)(unaff_EBP + 8);
      }
      iVar3 = iVar3 + 1;
    }
    FUN_00414f8b(unaff_EBP + -0x14);
    FUN_006543b6();
    if (*(int *)(extraout_ECX + 0xdc) == 0) {
      FUN_00718149(3);
    }
    *(undefined4 *)(extraout_ECX + 0x68) = 0;
    FUN_00714df3();
    FUN_008161f1(0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


