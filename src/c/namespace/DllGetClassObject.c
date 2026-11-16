/* DllGetClassObject - 0x50801081 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x1081  2  DllGetClassObject */
  piVar2 = (int *)&DAT_50818d0c;
  iVar1 = wcscmp((wchar_t *)rclsid,u_NameSpace_5081d1ac);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_5081d148;
  }
  else {
    iVar1 = wcscmp((wchar_t *)rclsid,u_FileSystem_5081d194);
    if (iVar1 == 0) {
      piVar2 = (int *)&DAT_5081d138;
    }
    else {
      iVar1 = wcscmp((wchar_t *)rclsid,u_Package_5081d184);
      if (iVar1 == 0) {
        piVar2 = (int *)&DAT_5081d128;
      }
      else {
        iVar1 = wcscmp((wchar_t *)rclsid,u_PackageWriter_5081d168);
        if (iVar1 == 0) {
          piVar2 = (int *)&DAT_5081d118;
        }
      }
    }
  }
  piVar2 = FUN_508061d9((int *)&DAT_5081e580,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


