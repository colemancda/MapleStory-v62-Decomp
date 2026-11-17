/* FUN_005d5208 - 0x005d5208 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d5208(void)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_004371d2(&stack0x00000004,&local_8);
  if (iVar1 != 0) {
    iVar1 = *(int *)(local_8 + 4);
    iVar2 = FUN_005c4e46();
    if (iVar2 != 0) {
      FUN_005c4d13(0);
      iVar1 = FUN_004cd670(iVar1 + 0xf8,*(undefined4 *)(iVar1 + 0x100));
      if (iVar1 == 0) {
        FUN_005d66f8(local_8);
        FUN_004d4b97(&stack0x00000004);
      }
    }
  }
  return;
}


