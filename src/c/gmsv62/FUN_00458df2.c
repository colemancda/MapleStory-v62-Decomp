/* FUN_00458df2 - 0x00458df2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char FUN_00458df2(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = param_2 / 100;
  if (iVar1 == 1) {
    bVar3 = param_1 != 5;
    if ((param_2 / 10) % 10 == 0) {
      return bVar3;
    }
    if (param_1 == 2) goto LAB_00458e9c;
LAB_00458e96:
    bVar2 = param_1 == 4;
  }
  else {
    if (iVar1 == 2) {
      if ((param_2 / 10) % 10 == 0) {
        return false;
      }
      if (param_1 != 4) {
        return false;
      }
      return true;
    }
    bVar3 = false;
    if (iVar1 == 3) {
      if ((param_1 == 1) || (param_1 == 2)) {
        bVar3 = true;
      }
      if ((param_2 / 10) % 10 == 0) {
        return bVar3;
      }
      goto LAB_00458e96;
    }
    if (iVar1 < 4) {
      return false;
    }
    if (5 < iVar1) {
      return false;
    }
    if ((param_1 == 1) || (param_1 == 4)) {
      bVar3 = true;
    }
    if ((param_2 / 10) % 10 == 0) {
      return bVar3;
    }
    bVar2 = param_1 == 2;
  }
  if (!bVar2) {
    return bVar3;
  }
LAB_00458e9c:
  return bVar3 + '\x01';
}


