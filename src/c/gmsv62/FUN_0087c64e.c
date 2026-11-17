/* FUN_0087c64e - 0x0087c64e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0087c64e(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_0087c6f3();
  if (DAT_009806e8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_009806e4 = 1;
  DAT_009806e0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00982260 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_0098225c - 4), DAT_00982260 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00982260 <= puVar1);
    }
    FUN_0087c705(&DAT_00963c24,&DAT_00963c2c);
  }
  FUN_0087c705(&DAT_00963c30,&DAT_00963c38);
  if (param_3 == 0) {
    DAT_009806e8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_0087c6fc();
  return;
}


