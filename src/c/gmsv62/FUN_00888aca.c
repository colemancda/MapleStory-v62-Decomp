/* FUN_00888aca - 0x00888aca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00888aca(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00980fe0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_00980ee0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_00970134 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00888b23;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_00888b23:
      *(HANDLE *)((&DAT_00980ee0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_0087fc84();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_0087fc8d();
  *puVar1 = 0;
  return 0xffffffff;
}


