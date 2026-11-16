/* DllGetClassObject - 0x50401072 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x1072  2  DllGetClassObject */
  piVar2 = (int *)&DAT_5042dad4;
  iVar1 = wcscmp((wchar_t *)rclsid,u_Gr2D_DX8_504340e8);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_504340c8;
  }
  piVar2 = FUN_50401aa3((int *)&DAT_50438a28,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


