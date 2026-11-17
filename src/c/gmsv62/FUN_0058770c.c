/* FUN_0058770c - 0x0058770c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0058770c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    while( true ) {
      while( true ) {
        iVar2 = FUN_005878cc(param_1,uVar1);
        if (iVar2 == -1) {
          return -1;
        }
        if (iVar2 != -3) break;
        uVar1 = 1;
      }
      if (iVar2 != -2) break;
LAB_00587734:
      uVar1 = 0;
    }
    iVar3 = FUN_0058775f(param_1);
    if (iVar3 == -1) {
      return -1;
    }
    if (iVar3 != -3) {
      if (iVar3 == -2) goto LAB_00587734;
      if (iVar2 == iVar3) {
        return iVar2;
      }
    }
    uVar1 = 3;
  } while( true );
}


