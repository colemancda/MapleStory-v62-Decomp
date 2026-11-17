/* FUN_0078779c - 0x0078779c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0078779c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  do {
    if (local_c < param_3) {
      iVar3 = local_c << 6;
      do {
        iVar1 = *(int *)(param_4 + 4);
        if (*(int *)(param_4 + 4) == 0) {
          iVar1 = DAT_00980dfc;
        }
        iVar2 = *(int *)(*param_1 + 4 + iVar3);
        if (iVar2 == 0) {
          iVar2 = DAT_00980dfc;
        }
        iVar1 = FUN_008858f0(iVar2,iVar1);
        if (-1 < iVar1) break;
        local_c = local_c + 1;
        iVar3 = iVar3 + 0x40;
      } while (local_c < param_3);
    }
    local_8 = local_8 + -1;
    if (param_2 < local_8) {
      iVar3 = local_8 * 0x40;
      do {
        iVar1 = *(int *)(*param_1 + 4 + iVar3);
        if (iVar1 == 0) {
          iVar1 = DAT_00980dfc;
        }
        iVar2 = *(int *)(param_4 + 4);
        if (*(int *)(param_4 + 4) == 0) {
          iVar2 = DAT_00980dfc;
        }
        iVar1 = FUN_008858f0(iVar2,iVar1);
        if (-1 < iVar1) break;
        local_8 = local_8 + -1;
        iVar3 = iVar3 + -0x40;
      } while (param_2 < local_8);
    }
    if (local_8 <= local_c) {
      return local_c;
    }
    FUN_00788ff5(local_c * 0x40 + *param_1,local_8 * 0x40 + *param_1);
    local_c = local_c + 1;
  } while( true );
}


