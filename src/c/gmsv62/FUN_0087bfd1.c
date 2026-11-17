/* FUN_0087bfd1 - 0x0087bfd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


HANDLE FUN_0087bfd1(LPCSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  _WIN32_FIND_DATAA local_144;
  
  pvVar1 = FindFirstFileA(param_1,&local_144);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_144.dwFileAttributes != 0x80) & local_144.dwFileAttributes;
    uVar4 = ___timet_from_ft(&local_144.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft(&local_144.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft(&local_144.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_144.nFileSizeLow;
    FUN_0087b200(param_2 + 5,local_144.cFileName);
    return pvVar1;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_0087c00f:
    puVar3 = (undefined4 *)FUN_0087fc84();
    *puVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        puVar3 = (undefined4 *)FUN_0087fc84();
        *puVar3 = 0xc;
        return (HANDLE)0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_0087c00f;
    }
    puVar3 = (undefined4 *)FUN_0087fc84();
    *puVar3 = 2;
  }
  return (HANDLE)0xffffffff;
}


