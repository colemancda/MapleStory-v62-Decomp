/* FUN_0061d152 - 0x0061d152 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0061d152(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + -4);
  }
  local_8 = 0;
  puVar3 = &DAT_009783a8;
  do {
    cVar1 = FUN_00402f72(puVar3);
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        return local_8;
      }
      FUN_004030b1();
      return local_8;
    }
    local_8 = local_8 + 1;
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x9783cc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = FUN_00402f72(&param_2);
      if (cVar1 != '\0') {
        if (param_2 == 0) {
          return iVar4 + 9;
        }
        FUN_004030b1();
        return iVar4 + 9;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (param_2 != 0) {
    FUN_004030b1();
  }
  return -1;
}


