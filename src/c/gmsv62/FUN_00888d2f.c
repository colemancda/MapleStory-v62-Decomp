/* FUN_00888d2f - 0x00888d2f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00888d2f(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_00980fe0 <= param_1) {
LAB_00888db0:
    puVar4 = (undefined4 *)FUN_0087fc84();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_00980ee0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_00888db0;
  FUN_00888cae(param_1);
  if ((*(byte *)((&DAT_00980ee0)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_00888bc5(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_00888da5;
    pDVar3 = (DWORD *)FUN_0087fc8d();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_0087fc84();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_00888da5:
  FUN_00888d0d(param_1);
  return uVar6;
}


