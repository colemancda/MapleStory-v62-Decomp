/* FUN_0056a28a - 0x0056a28a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0056a28a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x11c) + *(int *)(unaff_EBP + 0xc) * 4);
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  piVar4 = *(int **)(extraout_ECX + 0x15c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar3 = 0;
  do {
    if (*piVar4 == iVar1) {
      FUN_00414f8b(piVar4 + 1);
      break;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 8;
  } while (iVar3 < 0x17);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = 0;
  FUN_00414f8b(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


