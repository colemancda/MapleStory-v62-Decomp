/* FUN_00788597 - 0x00788597 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00788597(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = param_3;
  iVar2 = param_2;
  do {
    if (iVar2 < param_3) {
      iVar3 = iVar2 * 0x44;
      do {
        iVar1 = FUN_00786bd4(*param_1 + iVar3,param_4);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar2 < param_3);
    }
    local_8 = local_8 + -1;
    if (param_2 < local_8) {
      iVar3 = local_8 * 0x44;
      do {
        iVar1 = FUN_00786bd4(param_4,*param_1 + iVar3);
        if (iVar1 == 0) break;
        local_8 = local_8 + -1;
        iVar3 = iVar3 + -0x44;
      } while (param_2 < local_8);
    }
    if (local_8 <= iVar2) {
      return iVar2;
    }
    FUN_0078975b(iVar2 * 0x44 + *param_1,local_8 * 0x44 + *param_1);
    iVar2 = iVar2 + 1;
  } while( true );
}


