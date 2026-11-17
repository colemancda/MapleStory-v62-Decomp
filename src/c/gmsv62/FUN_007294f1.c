/* FUN_007294f1 - 0x007294f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007294f1(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_007295d1(0);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (*(int *)(iVar1 + 8) != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + -4);
    }
    iVar2 = iVar2 + -3;
  }
  FUN_004ad003(iVar2);
  return;
}


