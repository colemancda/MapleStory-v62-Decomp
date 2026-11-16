/* FUN_1000abe0 - 0x1000abe0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void FUN_1000abe0(DWORD param_1)

{
  DWORD dwErrCode;
  
  switch(param_1) {
  case 0xfffffffb:
    dwErrCode = 0x57;
    break;
  case 0xfffffffc:
    dwErrCode = 0xe;
    break;
  default:
    if (-1 < (int)param_1) {
      dwErrCode = 0;
      break;
    }
    dwErrCode = GetLastError();
    if (dwErrCode != 0) break;
  case 0xfffffffd:
  case 0xfffffffe:
    dwErrCode = 0xd;
  }
  SetLastError(dwErrCode);
  param_1 = dwErrCode;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_1000eff8);
}


