/* FUN_0048342d - 0x0048342d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0048342d(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_00978678;
  do {
    cVar1 = FUN_00402f72(&param_1);
    if (cVar1 != '\0') {
      if (param_1 == 0) {
        return iVar3;
      }
      FUN_004030b1();
      return iVar3;
    }
    puVar2 = puVar2 + 0x18;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x9790c8);
  if (param_1 != 0) {
    FUN_004030b1();
  }
  return -1;
}


